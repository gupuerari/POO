#include <iostream>
#include <cmath>

using namespace std;

class Ponto {
private:
    double x;
    double y;
public:
    Ponto(double x_c, double y_c){
        x = x_c;
        y = y_c;
    }
    ~Ponto() { 
        cout << "Destruindo ponto" << endl; 
        
    }
    double getX() { 
        return x; 
    }
    double getY() { 
        return y;
    }
    void setX(double novoX) { 
        x = novoX; 
    }
    void setY(double novoY) { 
        y = novoY; 
    }
    void exibir() { 
        cout << "(" << x << ", " << y << ")" << endl; 
    }
};

class Circulo {
private:
    Ponto centro;
    double raio;
public:
    Circulo(double x, double y, double r) : centro(x, y) {
        raio = (r > 0) ? r : 1.0;
    }
    
    ~Circulo() {
        cout << "Destruindo circulo" << endl;
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
    
    void mover(double dx, double dy) {
        centro.setX(centro.getX() + dx);
        centro.setY(centro.getY() + dy);
    }
};

int main() {
    Circulo c(0, 0, 5);
    c.exibir();
    cout << "Area: " << c.area() << endl;
    cout << "Circunferencia: " << c.circunferencia() << endl;
    c.mover(2, 3);
    c.exibir();
    return 0;
}