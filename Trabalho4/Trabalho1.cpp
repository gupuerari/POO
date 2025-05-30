#include <iostream>
#include <cmath>

using namespace std;

class Ponto {
private:
    int x;
    int y;

public:

    Ponto(int x_c, int y_c){
        x = x_c;
        y = y_c;
    }
    
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
    
    // Sobrecargas de distância
    double distancia(int x2, int y2) { // Versão coordendas
        return sqrt(pow(x - x2, 2) + pow(y - y2, 2));
    }
    
    double distancia(const Ponto& outro) { // Por referência
        return distancia(outro.getX(), outro.getY());
    }
    
    double distancia(const Ponto* outro) { // Por ponteiro
        return distancia(outro->getX(), outro->getY());
    }
    
};

int main() {

    Ponto p1(2, 3);
    Ponto p2(5, 7);
    
    cout << "Distância por coordenadas: " << p1.distancia(5, 7) << endl;
    cout << "Distância por referência: " << p1.distancia(p2) << endl;
    cout << "Distância por ponteiro: " << p1.distancia(&p2) << endl;

    return 0;
}