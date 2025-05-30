#include <iostream>
#include <string>

class Pessoa {
private:
    std::string nome;
    int idade;
    float peso;
    float altura;

public:
    Pessoa(std::string n, int id, float p, float a) {
        this->nome = n;
        this->idade = id;
        this->peso = p;
        this->altura = a;
    }

    std::string getNome() { return nome; }
    int getIdade() { return idade; }
    float getPeso() { return peso; }
    float getAltura() { return altura; }

 
    void setNome(std::string n) { nome = n; }
    void setIdade(int id) { idade = id; }
    void setPeso(float p) { peso = p; }
    void setAltura(float a) { altura = a; }

    void imprimirDados() {
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Idade: " << idade << " anos" << std::endl;
        std::cout << "Peso: " << peso << " kg" << std::endl;
        std::cout << "Altura: " << altura << " m" << std::endl;
    }

    float calcularIMC() {
        return peso / (altura * altura);
    }
};

int main() {
    std::string nome;
    int idade;
    float peso, altura;
    Pessoa pessoa1("Gustavo", 22, 65, 1.75);
    
   /*
    std::cout << "Digite o nome: ";
    std::getline(std::cin, nome);
    std::cout << "Digite a idade: ";
    std::cin >> idade;
    std::cout << "Digite o peso (kg): ";
    std::cin >> peso;
    std::cout << "Digite a altura (m): ";
    std::cin >> altura;
    Pessoa pessoa1(nome, idade, peso, altura);
    */
    pessoa1.imprimirDados();
    
    std::cout << "IMC: " << pessoa1.calcularIMC() << std::endl;
    
    return 0;
}
