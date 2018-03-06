/*
Aluno: Everton Cardoso Acchetta
RA: 22.117.061-6
Disciplina: CC3642 - Orientação a Objetos

Programa criado para receber o Dia, Mês e Ano do usuário e exibir a data formatada dd/mm/aaaa.
 */
#include <iostream>

using namespace std;

//Cria a classe Date
class Date
{
public:
    void setDia(int dia)
    {
        //case test para verificar se o dia entrado se encaixa nos casos de teste
        bool certo = false;
        while (certo == false)
        {
            if(dia > 31 || dia < 1)
            {
                mensagemErro();
                cin >> dia;
            }
            else
                certo = true;
        }
        this->dia = dia;
    }

    int getDia()
    {
        return dia;
    }

    void setMes(int mes)
    {
        //case test para verificar se o mes entrado se encaixa nos casos de teste
        bool certo = false;
        while (certo == false)
        {
            if(mes > 12 || mes < 1)
            {
                mensagemErro();
                cin >> mes;
            }
            else
                certo = true;
        }
        this->mes = mes;
    }

    int getMes()
    {
        return mes;
    }

    void setAno(int ano)
    {
        //case test para verificar se o ano entrado se encaixa nos casos de teste
        bool certo = false;
        while (certo == false)
        {
            if(ano < 1)
            {
                mensagemErro();
                cin >> ano;
            }
            else
                certo = true;
        }
        this->ano = ano;
    }

    int getAno()
    {
        return ano;
    }

    //mensagem para ser exibida quando um valor nao possivel for entrado.
    void mensagemErro()
    {
        cout << "Valor inválido! Favor digitar uma data possivel!"<<endl;
    }

    //Exibe a data formatada.
    void displayDate()
    {
        cout << "A data digitada foi: " << dia << "/" << mes << "/" << ano << endl;
    }

private:
    int dia, mes, ano;
};

int main()
{
    Date data;

    int buffer;

    //Entrar com o dia da data
    cout << "Entre com o dia: ";
    cin >> buffer;

    data.setDia(buffer);

    //Entrar com o mes da data
    cout << "Entre com o mês: ";
    cin >> buffer;

    data.setMes(buffer);

    //Entrar com o ano da data
    cout << "Entre com o ano: ";
    cin >> buffer;

    data.setAno(buffer);

    //exibir a data
    data.displayDate();
    return 0;
}
