#include <iostream>
#include <iomanip>
using namespace std;

void sacar(double& saldo, double valor) {
    if (valor <= 0) {
        throw '-';
    }
    if (valor > saldo) {
        double falta = valor - saldo;
        throw falta;
    }
    saldo = saldo - valor;
}

void depositar(double& saldo, double valor) {
    if (valor <= 0) {
        throw '+';
    }
    if (valor > 10000) {
        throw 10000;
    }
    saldo = saldo + valor;
}

int main() {
    double saldo = 1000.0;
    int opcao;
    double valor;

    while (true) {
        cout << "\nSaldo atual: R$ " << fixed << setprecision(2) << saldo << endl;
        cout << "1 - Sacar\n2 - Depositar\n3 - Sair\nEscolha: ";
        cin >> opcao;

        if (opcao == 3) {
            break;
        }

        try {
            if (opcao == 1) {
                cout << "Valor para sacar: ";
                cin >> valor;
                sacar(saldo, valor);
            } else if (opcao == 2) {
                cout << "Valor para depositar: ";
                cin >> valor;
                depositar(saldo, valor);
            } else {
                cout << "Opção inválida!\n";
                continue;
            }
        } catch (char c) {
            cout << "Valor negativo/zero (" << c << ")\n";
        } catch (double d) {
            cout << "Saldo insuficiente. Faltam R$ " << fixed << setprecision(2) << d << '\n';
        } catch (int lim) {
            cout << "Depósito excede limite diário de R$ " << lim << '\n';
        }

        cout << "Saldo atualizado: R$ " << fixed << setprecision(2) << saldo << endl;
    }

    return 0;
}