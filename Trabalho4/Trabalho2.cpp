#include <iostream>
#include <cmath>

using namespace std;

class Ponto {
private:
    int x;
    int y;
public:
    Ponto(int x_c, int y_c) : x(x_c), y(y_c) {}
    ~Ponto() { 
        cout << "Destruindo ponto (" << x << ", " << y << ")" << endl; 
    }
    int getX() const { return x; }
    int getY() const { return y; }
    void setX(int novoX) { x = novoX; }
    void setY(int novoY) { y = novoY; }
    void exibir() { 
        cout << "(" << x << ", " << y << ")" << endl; 
    }
};

class Circulo {
private:
    Ponto centro;
    int raio;
public:
    Circulo(int x, int y, int r) : centro(x, y) {
        raio = (r > 0) ? r : 1;
    }
    
    ~Circulo() {
        cout << "Destruindo circulo com centro em ";
        centro.exibir();
        cout << " e raio " << raio << endl;
    }
    
    double area() {
        return M_PI * raio * raio;
    }
    
    double circunferencia() {
        return 2 * M_PI * raio;
    }
    
    void exibir() {
        cout << "Centro: ";
        centro.exibir();
        cout << "Raio: " << raio << endl;
    }
    
    // Versão absoluta (int)
    void mover(int novoX, int novoY) {
        centro.setX(novoX);
        centro.setY(novoY);
    }
    
    // Versão relativa (float)
    void mover(float dx, float dy) {
        mover((int)(centro.getX() + dx), 
              (int)(centro.getY() + dy));
    }
    
    void mover(Ponto* novoCentro) {
        mover(novoCentro->getX(), novoCentro->getY());
    }
    
    void mover(const Ponto& novoCentro) {
        mover(novoCentro.getX(), novoCentro.getY());
    }
};

int main() {
    Circulo c(0, 0, 5);
    cout << "Estado inicial:" << endl;
    c.exibir();
    
    // Teste com floats
    cout << "\nMovendo por deslocamento float (+1, -1):" << endl;
    c.mover(1.0f, -1.0f);
    c.exibir();  // Deve mostrar (1, 0)
    
    // Teste original com inteiros
    cout << "\nMovendo para coordenadas absolutas (2, 3):" << endl;
    c.mover(2, 3);
    c.exibir();
    
    cout << "\nFinalizando..." << endl;
    return 0;
}