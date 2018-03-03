#include <iostream>

using namespace std;

class Quadrado
{
public:
    void setLado(int lado)
    {
        this->lado = lado;
    }

    int getLado()
    {
        return lado;
    }

    int area()
    {
        return (getLado()*2);
    }

    int perimetro()
    {
        return (getLado()*4);
    }

    void print()
    {
        cout << "O lado do quadrado é " << getLado() << endl;
        cout << "A área do quadrado é " << area() << endl;
        cout << "O perimetro do quadrado é " << perimetro() << endl;
    }

private:
    int lado;
};

int main()
{
    int buffer;
    Quadrado q1, q2;

    cout << "Entre com o lado do primeiro quadrado:"<<endl;
    cin >> buffer;
    q1.setLado(buffer);

    cout << "Entre com o lado do segundo quadrado:"<<endl;
    cin >> buffer;
    q2.setLado(buffer);

    q1.print();
    q2.print();

    return 0;
}