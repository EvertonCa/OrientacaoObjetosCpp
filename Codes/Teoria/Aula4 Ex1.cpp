#include <iostream>

using namespace std;

//create the class Pessoa
class Pessoa
{
public:
    void setNome(string nome)
    {
        nomePessoa = nome;
    }

    void setCPF(int cpf)
    {
        cpfPessoa = cpf;
    }

    string getNomePessoa()
    {
        return nomePessoa;
    }

    int getCpfPessoa()
    {
        return cpfPessoa;
    }

    void displayPessoa()
    {
        cout << "A pessoa de nome "<< getNomePessoa() << " tem o CPF: " << getCpfPessoa()<<endl;
    }

private:
    string nomePessoa;
    int cpfPessoa;
};

int main()
{
    string bufferNome;
    int bufferCPF;
    Pessoa pessoa1, pessoa2;

    cout << "Entre com o nome da primeira pessoa:"<<endl;
    getline(cin, bufferNome);
    pessoa1.setNome(bufferNome);

    cout << "Entre com o CPF da primeira pessoa:"<<endl;
    cin >> bufferCPF;
    pessoa1.setCPF(bufferCPF);
    cin.ignore();

    cout << "Entre com o nome da segunda pessoa:"<<endl;
    getline(cin, bufferNome);
    pessoa2.setNome(bufferNome);

    cout << "Entre com o CPF da segunda pessoa:"<<endl;
    cin >> bufferCPF;
    pessoa2.setCPF(bufferCPF);
    cin.ignore();

    pessoa1.displayPessoa();
    pessoa2.displayPessoa();

    return 0;
}
