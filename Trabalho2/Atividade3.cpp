#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Produto {
private: 
    string nome;
    double preco;
    int quantidade;

public:
    Produto(string n, double p, int q) {
        nome = n;
        preco = p;
        quantidade = q;
    }

    ~Produto() {
        cout << "Destruindo " << nome << endl;
    }

    string getNome() { return nome; }
    double getPreco() { return preco; }
    int getQuantidade() { return quantidade; }

    void setNome(string n) { nome = n; }
    void setPreco(double p) { preco = p; }
    void setQuantidade(int q) { quantidade = q; }
};

class Estoque {
private:
    vector<Produto*> produtos;

public:
    void adicionarProduto(string nome, double preco, int quantidade) {
        produtos.push_back(new Produto(nome, preco, quantidade));
    }

    void listarProdutos() {
        cout << "\n--- Lista de Produtos ---" << endl;
        for (Produto* p : produtos) {
            
            cout << "Nome: " << p->getNome() 
                 << ", Preço: R$" << p->getPreco() 
                 << ", Quantidade: " << p->getQuantidade() << endl;
        }
    }

    ~Estoque() {
        cout << "\nLiberando estoque..." << endl;
        for (Produto* p : produtos) {
            delete p;
        }
    }
};

int main() {
    Estoque estoque;
    estoque.adicionarProduto("Caneta", 1.50, 100);
    estoque.adicionarProduto("Caderno", 20.00, 50);
    estoque.listarProdutos();
    return 0;
}
