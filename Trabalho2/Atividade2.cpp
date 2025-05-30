#include <iostream>
#include <string>
using namespace std;

/* //parte 2
struct ProdutoStruct {
    string nome;
    double preco;
    int quantidade;

    ProdutoStruct(string n, double p, int q) {
        nome = n;
        preco = p;
        quantidade = q;
    }

    void imprime() {
        cout << "Struct: " << nome << ", R$" << preco << ", " << quantidade << " unidades" << endl;
    }
};
*/

class ProdutoClassFinal {
public:
    string nome;
    double preco;
    int quantidade;

    //Construtor
    ProdutoClassFinal(string n, double p, int q) {
        nome = n;
        preco = p;
        quantidade = q;
    }

    // Destrutor
    ~ProdutoClassFinal(){
        cout << "Destruindo SOCORRO!!!! " << nome << " destruida" << endl;
    }
    
    void imprime() {
        cout << "Class: " << nome << ", R$" << preco << ", " << quantidade << " unidades" << endl;
    }
};

int main() {
   /* //parte 2
    ProdutoStruct ps("Bala de Banana", 0.5, 1);
    ps.imprime();
    */

    {
        ProdutoClassFinal pcf1("Bala de Café", 0.25, 1);
        pcf1.imprime();
    } 

    return 0;
}