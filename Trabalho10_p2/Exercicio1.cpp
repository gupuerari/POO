#include <iostream>
#include <exception>
using namespace std;

class IndiceInvalido : public exception {
public:
    const char* what() const noexcept override {
        return "Índice inválido";
    }
};

template<typename T, size_t N>
class VetorEstatico {
    T elementos[N];
    size_t tamanho = 0;
public:
    T obter(size_t indice) {
        if (indice >= tamanho) throw IndiceInvalido();
        return elementos[indice];
    }

    void adicionar(size_t posicao, const T valor) {
        if (tamanho >= N || posicao > tamanho ) throw IndiceInvalido();;

        for (size_t k = tamanho; k > posicao; --k)
            elementos[k] = elementos[k-1];
        elementos[posicao] = valor;
        ++tamanho;
    }

    void remover(size_t posicao) {
        if (posicao >= tamanho) throw IndiceInvalido();
        for (size_t k = posicao; k + 1 < tamanho; ++k)
            elementos[k] = elementos[k+1];
        --tamanho;
    }
};

int main() {

    try {
        VetorEstatico<int,5> v;
        v.adicionar(0, 5);          
        v.adicionar(2, 1);          
        cout << "v[1] = " << v.obter(1) << "\n";
        //v.remover(1);                
        cout << "v[0] = " << v.obter(0) << "\n";
    } catch (const exception& e) {
        cerr << "Erro inesperado: " << e.what() << "\n";
    }

    return 0;
}
