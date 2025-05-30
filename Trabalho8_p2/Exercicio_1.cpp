#include <iostream>
#include <cmath>
using namespace std;

double divide(int num, int den) {
    if (den == 0) {
        throw 0; 
    }
    double quociente = double(num) / den;
    if (abs(quociente) > 10000.0) {
        throw quociente;
    }
    return quociente;
}

int main() {
    int a, b;
    int cont_int = 0, cont_double = 0, cont_unknown = 0;

    while (true) {
        cout << "Dois inteiros: ";
        cin >> a >> b;
        
        if (a == 999 && b == 999) {
            break;
        }

        try {
            double resultado = divide(a, b);
            cout << "Resultado: " << resultado << endl;
        } catch (int e) {
            cout << "Erro: divisão por zero.\n";
            cont_int++;
        } catch (double e) {
            cout << "Aviso: resultado fora do intervalo permitido.\n";
            cont_double++;
        } catch (...) {
            cout << "Exceção desconhecida.\n";
            cont_unknown++;
        }
    }

    cout << "\nResumo de exceções:\n";
    cout << "Divisão por zero: " << cont_int << endl;
    cout << "Resultado fora do intervalo: " << cont_double << endl;
    cout << "Exceções desconhecidas: " << cont_unknown << endl;

    return 0;
}