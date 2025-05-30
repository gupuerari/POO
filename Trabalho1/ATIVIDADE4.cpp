#include <iostream>
#include <string>

class Endereco {
private:
    std::string rua;
    int numero;
    std::string bairro;
    std::string cidade;
    std::string cep;

public:
  
    Endereco(std::string r, int n, std::string b, std::string c, std::string cp) {
        rua = r;
        numero = n;
        bairro = b;
        cidade = c;
        cep = cp;
    }

    std::string getRua() { return rua; }
    int getNumero() { return numero; }
    std::string getBairro() { return bairro; }
    std::string getCidade() { return cidade; }
    std::string getCep() { return cep; }

    void setRua(std::string r) { rua = r; }
    void setNumero(int n) { numero = n; }
    void setBairro(std::string b) { bairro = b; }
    void setCidade(std::string c) { cidade = c; }
    void setCep(std::string cp) { cep = cp; }
};


class Pessoa {
private:
    std::string nome;
    int idade;
    Endereco endereco;

public:
    Pessoa(std::string n, int id, std::string r, int num, std::string b, std::string c, std::string cp)
        : nome(n), idade(id), endereco(r, num, b, c, cp) {}

    std::string getNome() { return nome; }
    int getIdade() { return idade; }
    Endereco getEndereco() { return endereco; }

    void setNome(std::string n) { nome = n; }
    void setIdade(int id) { idade = id; }
    void setEndereco(Endereco e) { endereco = e; }


    void imprimirEndereco() {
        std::cout << "Endereco de " << nome << ":\n";
        std::cout << endereco.getRua() << ", " << endereco.getNumero() << " - " << endereco.getBairro() << "\n";
        std::cout << endereco.getCidade() << " - CEP: " << endereco.getCep() << "\n";
    }
};

int main() {
    Pessoa pessoa("Gustavo", 22, "Javert Manfredini", 287, "Atuba", "Curitiba", "82860-570");
    
  
    pessoa.imprimirEndereco();
    
    return 0;
}
