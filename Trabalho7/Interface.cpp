#include <iostream>
#include <string>

using namespace std;

class Autenticavel {
public:
    virtual bool autenticar(const string& senha) const = 0;
};

class Pagavel {
public:
    virtual void pagar(double valor) = 0;
};

class Cliente : public Autenticavel, public Pagavel {
private:
    string senha;
    
public:
    Cliente(const string& senha) : senha(senha) {}
    
    bool autenticar(const string& senha) const {
        return this->senha == senha;
    }
    
    void pagar(double valor) {
        cout << "Pagamento de " << valor << endl;
    }
};

class Funcionario : public Autenticavel {
private:
    string senha;
    
public:
    Funcionario(const string& senha) : senha(senha) {}
    
    bool autenticar(const string& senha) const {
        return this->senha == senha;
    }
};

int main() {
    Cliente cliente("admin");
    cout << "Autenticação cliente: " << boolalpha 
         << cliente.autenticar("admin") << endl; 
    cliente.pagar(10.99);
    
    Funcionario funcionario("query");
    cout << "Autenticação funcionário: " << boolalpha 
         << funcionario.autenticar("admin") << endl; 

    return 0;
}