#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

double divide(int num, int den) {
    if (den == 0) {
        throw invalid_argument("Divisor não pode ser zero.");
    }
    
    double quociente = double(num) / den;
    
    if (abs(quociente) > 10000.0) {
        throw overflow_error("Resultado fora do intervalo permitido.");
    }
    
    return quociente;
}

int main() {
    int a, b;
    int cont_invalid = 0, cont_overflow = 0, cont_other = 0;

    while (true) {
        cout << "Dois inteiros: ";
        cin >> a >> b;
        
        if (a == 999 && b == 999) {
            break;
        }

        try {
            double resultado = divide(a, b);
            cout << "Resultado: " << resultado << endl;
        } 
        catch (const invalid_argument& e) { 
            cout << "Erro: " << e.what() << "\n";
            cont_invalid++;
        } 
        catch (const overflow_error& e) {
            cout << "Aviso: " << e.what() << "\n";
            cont_overflow++;
        } 
        catch (const exception& e) {
            cout << "Exceção desconhecida: " << e.what() << "\n";
            cont_other++;
        }
    }

    cout << "\nResumo de exceções:\n";
    cout << "Argumento inválido: " << cont_invalid << endl;
    cout << "Overflow: " << cont_overflow << endl;
    cout << "Outras exceções: " << cont_other << endl;

    return 0;
}