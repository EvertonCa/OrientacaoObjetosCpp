#include <iostream>

using namespace std;

class Veiculo
{
public:

    void setTamanho (int tamanho)
    {
        this->tamanho = tamanho;
    }

    int getTamanho()
    {
        return tamanho;
    }

    void setTipo (string tipo)
    {
        this->tipo = tipo;
    }

    string getTipo()
    {
        return tipo;
    }

    void moveFrente()
    {
        cout << "Andei para a frente" << endl;
    }

    void moveRe()
    {
        cout << "Andei para atras" << endl;
    }

    void moveDireita()
    {
        cout << "Andei para a direita" << endl;
    }

    void moveEsquerda()
    {
        cout << "Andei para a esquerda" << endl;
    }

private:
    int tamanho;
    string tipo;
};


int main()
{
    //criação de objetos na stack (locação estática)
    Veiculo veiculoEstatico1, veiculoEstatico2, veiculoEstatico3, veiculoEstatico4, veiculoEstatico5;

    //criação de objetos na heap (locação dinamica)
    Veiculo *veiculoDinamico1 = new Veiculo;
    Veiculo *veiculoDinamico2 = new Veiculo;
    Veiculo *veiculoDinamico3 = new Veiculo;
    Veiculo *veiculoDinamico4 = new Veiculo;
    Veiculo *veiculoDinamico5 = new Veiculo;

    cout << "Veiculo dinamico 1 " << veiculoDinamico1 << endl;
    veiculoDinamico1->moveFrente();
    cout << "Veiculo dinamico 2 " << veiculoDinamico2 << endl;
    cout << "Veiculo dinamico 3 " << veiculoDinamico3 << endl;
    cout << "Veiculo dinamico 4 " << veiculoDinamico4 << endl;
    cout << "Veiculo dinamico 5 " << veiculoDinamico5 << endl;

    cout << "-------------" << endl;

    cout << "Veiculo estatico 1 " << &veiculoEstatico1 << endl;
    veiculoEstatico1.moveFrente();
    cout << "Veiculo estatico 2 " << &veiculoEstatico2 << endl;
    cout << "Veiculo estatico 3 " << &veiculoEstatico3 << endl;
    cout << "Veiculo estatico 4 " << &veiculoEstatico4 << endl;
    cout << "Veiculo estatico 5 " << &veiculoEstatico5 << endl;

    //desalocar a memória heap
    delete veiculoDinamico1;
    delete veiculoDinamico2;
    delete veiculoDinamico3;
    delete veiculoDinamico4;
    delete veiculoDinamico5;



    return 0;
}
