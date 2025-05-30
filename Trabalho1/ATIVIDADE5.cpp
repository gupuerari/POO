#include <iostream>
#include <string>

#define MAX_PRODUTOS 10

class Produto {
private:
    std::string nome;
    float preco;
    int quantidade;

public:
    Produto() {}
    Produto(std::string n, float p, int q) : nome(n), preco(p), quantidade(q) {}

    std::string getNome() { return nome; }
    float getPreco() { return preco; }
    int getQuantidade() { return quantidade; }

    void setProduto(std::string n, float p, int q) {
        nome = n;
        preco = p;
        quantidade = q;
    }

    void imprimirProduto() {
        std::cout << "Nome: " << nome << ", Preco: R$ " << preco << ", Quantidade: " << quantidade << std::endl;
    }
};

void adicionarProduto(Produto inventario[], int& tamanho, std::string nome, float preco, int quantidade) {
    if (tamanho < MAX_PRODUTOS) {
        inventario[tamanho].setProduto(nome, preco, quantidade);
        tamanho++;
    } else {
        std::cout << "Inventario cheio!" << std::endl;
    }
}

void imprimirInventario(Produto inventario[], int tamanho) {
    std::cout << "\nInventario de Produtos:" << std::endl;
    for (int i = 0; i < tamanho; i++) {
        inventario[i].imprimirProduto();
    }
}

int main() {
    Produto inventario[MAX_PRODUTOS];
    int tamanho = 0;
    
    adicionarProduto(inventario, tamanho, "Notebook", 3499.99, 10);
    adicionarProduto(inventario, tamanho, "Mouse", 299.99, 25);
    adicionarProduto(inventario, tamanho, "Teclado", 495.75, 15);
    
    imprimirInventario(inventario, tamanho);
    
    return 0;
}
