#include <iostream>
#include <string>

class Pessoa {
private:
    std::string nome;
    int idade;

public:
 
    Pessoa(std::string n, int i) : nome(n), idade(i >= 0 ? i : 0) {}


    std::string getNome() { return nome; }
    int getIdade() { return idade; }
    void setIdade(int novaIdade) { if (novaIdade >= 0) idade = novaIdade; }

    void exibirPessoa() {
        std::cout << "Nome: " << nome << ", Idade: " << idade << " anos" << std::endl;
    }
};

int main() {
    Pessoa pessoa1("Gustavo", 22);
    pessoa1.exibirPessoa();
    
    pessoa1.setIdade(-5);
    pessoa1.exibirPessoa();
    pessoa1.setIdade(30); 
    pessoa1.exibirPessoa();
    
    return 0;
}
