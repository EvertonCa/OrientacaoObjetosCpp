#include <iostream>

using namespace std;

class Funcionario
{
public:
    Funcionario(){};
    Funcionario(string nome, int idade, string sexo, int numero) : nome(nome), idade(idade), sexo(sexo), numero(numero){};

    string getNome()
    {
        return nome;
    }

    string getSexo()
    {
        return sexo;
    }

    int getIdade()
    {
        return idade;
    }

    int getNumero()
    {
        return numero;
    }

private:
    string nome, sexo;
    int idade, numero;
};

int main()
{
    Funcionario *func1 = new Funcionario;
    Funcionario *func2 = new Funcionario("Fulano", 22, "Masculino", 1234);

    cout << func1->getNome() << " " << func1->getIdade() << endl;
    cout << func2->getNome() << " " << func2->getIdade() << endl;

    Funcionario func3;
    Funcionario func4("Fulano", 22, "Masculino", 1234);

    cout << func3.getNome() << " " << func3.getIdade() << endl;
    cout << func4.getNome() << " " << func4.getIdade() << endl;

    delete func1;
    delete func2;

}