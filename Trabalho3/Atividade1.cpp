#include <iostream>
#include <cmath>

using namespace std;

class Ponto {
private:
    double x;
    double y;
    
public:
    Ponto(double x_c, double y_c) {
        x = x_c;
        y = y_c;
    }
    
    ~Ponto() {
        cout << "Destruindo" << endl;
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
    
    double distancia(Ponto* outro) {
        return sqrt(pow(x - outro->x, 2) + pow(y - outro->y, 2));
    }
};

int main() {
    Ponto p1(5, 2);
    Ponto p2(1, 3);
    cout << "Distancia: " << p1.distancia(&p2) << endl;
    return 0;
}