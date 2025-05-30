#include <iostream>
#include <cmath>
#include <string>

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
    ~Ponto() { cout << "Destruindo ponto" << endl; }
    
    void exibir() { 
        cout << "(" << x << ", " << y << ")"; 
    }
    
    double distancia(Ponto* outro) {
        return sqrt(pow(x - outro->x, 2) + pow(y - outro->y, 2));
    }
};

class Triangulo {
private:
    Ponto p1;
    Ponto p2;
    Ponto p3;
public:
    Triangulo(double x0, double y0, double x1, double y1, double x2, double y2) : p1(x0,y0), p2(x1,y1), p3(x2,y2) {}

    ~Triangulo() { 
        cout << "Destruindo triangulo" << endl; 
    }
    
    void exibir() {
        cout << "Pontos: ";
        p1.exibir(); 
        cout << " ";
        p2.exibir();
        cout << " ";
        p3.exibir();
        cout << endl;
    }
    
    double perimetro() {
        return p1.distancia(&p2) + p2.distancia(&p3) + p3.distancia(&p1);
    }
    
    string tipo() {
        double a = p1.distancia(&p2);
        double b = p2.distancia(&p3);
        double c = p3.distancia(&p1);
        
        if (a == b && b == c) return "Equilatero";
        else if (a == b || a == c || b == c) return "Isosceles";
        else return "Escaleno";
    }
};

int main() {
    /*
    Ponto a(0, 0);
    Ponto b(1, 0);
    Ponto c(1, 1);
    */
    
    Triangulo t(0, 0, 1, 0, 1, 1); 
    t.exibir();
    cout << "Perimetro: " << t.perimetro() << endl;
    cout << "Tipo: " << t.tipo() << endl;

    return 0;
}