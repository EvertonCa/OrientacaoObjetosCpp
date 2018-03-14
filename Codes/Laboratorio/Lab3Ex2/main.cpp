/*
Aluno: Everton Cardoso Acchetta
RA: 22.117.061-6
Disciplina: CC3642 - Orientação a Objetos

Programa criado para executar aritmetica entre numeros complexos
 */

#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex primeiroNumero, segundoNumero;
    bool teste = true;

    cout << "|----------------------------------------------|" << endl;
    cout << "|      Bem Vindo Complex Calculator 3000!      |" << endl;
    cout << "|----------------------------------------------|" << endl;

    primeiroNumero.mensagemConstroiObjeto();
    segundoNumero.mensagemConstroiObjeto();

    while (teste)
    {
        int opcao;
        cout << "|----------------------------------------------|" << endl;
        cout << "| Entre com a opcao desejada:                  |" << endl;
        cout << "| 1 - Soma dos numeros complexos:              |" << endl;
        cout << "| 2 - Subtracao dos numeros complexos:         |" << endl;
        cout << "| 0 - Fim do programa:                         |" << endl;
        cout << "|----------------------------------------------|" << endl;
        cin >> opcao;

        switch (opcao)
        {
            case 0:
            {
                cout << "|----------------------------------------------|" << endl;
                cout << "| Obrigado por usar o Complex Calculator 3000! |" << endl;
                cout << "|----------------------------------------------|" << endl;
                teste = false;
                break;
            }

            case 1:
            {
                Complex somaObjetos;
                somaObjetos = primeiroNumero.soma(segundoNumero);
                cout << "A SOMA dos numeros complexos é igual a: ";
                somaObjetos.displayNumero();
                break;
            }

            case 2:
            {
                Complex subtracaoObjetos;
                subtracaoObjetos = primeiroNumero.subtracao(segundoNumero);
                cout << "A SUBTRAÇÃO dos numeros complexos é igual a: ";
                subtracaoObjetos.displayNumero();
                break;
            }

            default:
                {
                    cout << "|----------------------------------------------|" << endl;
                    cout << "|         Entre com uma opcao valida!          |" << endl;
                    cout << "|----------------------------------------------|" << endl;
                }


        }
    }


    return 0;
}