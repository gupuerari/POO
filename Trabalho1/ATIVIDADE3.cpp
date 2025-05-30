#include <iostream>
#include <string>

class Carro {
private:
    std::string marca;
    std::string modelo;
    int ano;
    int kmRodados;

public:
    Carro(std::string m, std::string mod, int a) {
        marca = m;
        modelo = mod;
        ano = a;
        kmRodados = 0;
    }

    std::string getMarca() { return marca; }
    std::string getModelo() { return modelo; }
    int getAno() { return ano; }
    int getKmRodados() { return kmRodados; }

    void rodar(int km) {
        kmRodados += km;
    }
    
    void mostrarInfo() {
        std::cout << "Marca: " << marca << std::endl;
        std::cout << "Modelo: " << modelo << std::endl;
        std::cout << "Ano: " << ano << std::endl;
        std::cout << "Quilometragem: " << kmRodados << " km" << std::endl;
    }
};

int main() {
    
    Carro carro_ob("Nissan", "Sentra", 2016);
    carro_ob.rodar(100000);
    carro_ob.mostrarInfo();
    
    
    return 0;
}