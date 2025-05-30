#include <iostream>
#include <string>

using namespace std;

struct ProdutoStruct {
    string nome;
    double preco;
    int quantidade;
    
    void imprime() { 
        cout << "Produto: " << nome << ", R$" << preco << ", " << quantidade << " unidades" << endl;
    }
};

class ProdutoClass {
    string nome; 
    double preco;
    int quantidade;
    
    void imprime() { 
        cout << "Produto: " << nome << ", R$" << preco << ", " << quantidade << " unidades" << endl;
    }
};

class ProdutoClassFinal {
public:
    string nome;
    double preco;
    int quantidade;
    
    void imprime() { 
        cout << "Produto: " << nome << ", R$" << preco << ", " << quantidade << " unidades" << endl;
    }
};

int main() {
    ProdutoStruct ps;
    ps.nome = "Bala de Banana";
    ps.preco = 5;
    ps.quantidade = 5;
    ps.imprime(); 

    /*
    ProdutoClass pc;
    pc.nome = "Bala de café"; // Erro: atributos privados!
    pc.preco = 0.25;    
    pc.quantidade = 1;  
    pc.imprime();        
    */

    ProdutoClassFinal pcf;
    pcf.nome = "Bala de café";
    pcf.preco = 0.25;
    pcf.quantidade = 1;
    pcf.imprime(); 

    return 0;
}