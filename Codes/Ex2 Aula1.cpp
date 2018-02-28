#include <iostream>
#include <string>

using namespace std;

struct Pessoa
{
    int CPF;
    string nome;
};

void Print(Pessoa a)
{
    cout << "CPF: " << a.CPF << endl;
    cout<< "Nome: " << a.nome << endl;
}

int main()
{
    Pessoa p1, p2;

    p1.CPF = 10;
    p1.nome = "Paulo";

    p2.CPF = 20;
    p2.nome = "Maria";

    Print(p1);
    Print(p2);

    return 0;

}