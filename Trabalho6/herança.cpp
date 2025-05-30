#include <iostream>
#include <cmath>

using namespace std;

class Forma {
public:
    virtual string getNomeForma() const = 0;
    virtual double area() const = 0;
    virtual double perimetro() const = 0;
};

class Circulo: public Forma{
private:
    double raio;
public:
    Circulo(double r) : raio(r) {}
    
    string getNomeForma() const{
        return "Circulo";
    }
    double area() const {
        return M_PI * raio * raio;
    }
    double perimetro() const {
        return 2 * M_PI * raio;
        
    }
};

class Retangulo: public Forma{
private:
    double largura, altura;
public:
    Retangulo(double l, double a) : largura(l),altura(a) {}
    
    string getNomeForma() const {
        return "Retângulo";
    }
    double area() const {
        return largura * altura;
    }
    double perimetro() const {
        return 2 * (largura + altura);
    }
};

class Triangulo: public Forma{
private:
    double lado1, lado2, lado3;
public:
     Triangulo(double l1, double l2, double l3) : lado1(l1),lado2(l2),lado3(l3) {}
     
    string getNomeForma() const {
        return "Triângulo";
    }
    double perimetro() const {
        return lado1 + lado2 + lado3;
    }
    double area() const {
        double s = (lado1 + lado2 + lado3) / 2.0;
        return sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
    }
};  
     
void imprimirFormas(const array<Forma*,3>& formas) {
    for (const auto* f : formas) {
        cout
            << f->getNomeForma()
            << ": área = "
            << fixed << f->area()
            << ", perímetro = "
            << fixed << f->perimetro()
            <<"\n";
    }
}



int main() {
    array<Forma*, 3> formas = {
        new Circulo(1.0),
        new Retangulo(1.0, 2.0),
        new Triangulo(1.0, 2.0,3.0)};
        
        imprimirFormas(formas);


    return 0;
}