#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Serializavel {
public:
    virtual void salvar(const string& caminho) const = 0;
    virtual void carregar(const string& caminho) = 0;
};

class Funcionario : public Serializavel {
private:
    int id;
    string nome;
    string cargo;
    float salario;
    int idade;
    bool ativo;
public:
    Funcionario(int id = 0, string nome = "", string cargo = "",
        float salario = 0.0f, int idade = 0, bool ativo = false)
        : id(id), nome(nome), cargo(cargo),
        salario(salario), idade(idade), ativo(ativo) {}

    int getId() const { return id; }
    string getNome() const { return nome; }
    string getCargo() const { return cargo; }
    float getSalario() const { return salario; }
    int getIdade() const { return idade; }
    bool isAtivo() const { return ativo; }

    void salvar(const string& caminho) const override {
        ofstream out(caminho, ios::binary);

        if (!out.is_open()) {
            cerr << "Erro ao abrir arquivo para escrita: " << caminho << endl;
            return;
        }

        out.write((const char*)&id, sizeof(id));

        size_t tam_nome = nome.size();
        out.write((const char*)&tam_nome, sizeof(tam_nome));
        out.write(nome.c_str(), tam_nome);

        size_t tam_cargo = cargo.size();
        out.write((const char*)&tam_cargo, sizeof(tam_cargo));
        out.write(cargo.c_str(), tam_cargo);

        out.write((const char*)&salario, sizeof(salario));
        out.write((const char*)&idade, sizeof(idade));
        out.write((const char*)&ativo, sizeof(ativo));

        cout << "Dados salvos com sucesso em: " << caminho << endl;
    }

    void carregar(const string& caminho) override {
        ifstream in(caminho, ios::binary);

        if (!in.is_open()) {
            cerr << "Erro ao abrir arquivo para leitura: " << caminho << endl;
            return;
        }

        in.read((char*)&id, sizeof(id));

        size_t tam_nome;
        in.read((char*)&tam_nome, sizeof(tam_nome));
        nome.resize(tam_nome);
        in.read(&nome[0], tam_nome);

        size_t tam_cargo;
        in.read((char*)&tam_cargo, sizeof(tam_cargo));
        cargo.resize(tam_cargo);
        in.read(&cargo[0], tam_cargo);

        in.read((char*)&salario, sizeof(salario));
        in.read((char*)&idade, sizeof(idade));
        in.read((char*)&ativo, sizeof(ativo));
    }

    void exibir() const {
        cout << "\n--- Dados do Funcionario ---" << endl;
        cout << "ID:     " << id << endl;
        cout << "Nome:   " << nome << endl;
        cout << "Cargo:  " << cargo << endl;
        cout << "Salario: RS " << salario << endl;
        cout << "Idade:  " << idade << " anos" << endl;
        cout << "Ativo:  " << (ativo ? "Sim" : "Nao") << endl;
        cout << "----------------------------\n" << endl;
    }
};

int main() {
    Funcionario func1(95, "Gustavo", "Dev", 0.5f, 22, true);

    func1.salvar("funcionario.bin");

    Funcionario func2;
    func2.carregar("funcionario.bin");

    cout << "\nDados carregados do arquivo:\n";
    func2.exibir();

    return 0;
}
