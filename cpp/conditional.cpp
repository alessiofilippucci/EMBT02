#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num = 100;

    if (num > 0)
    {
        cout << "Numero positivo";
    }
    else if (num < 0)
    {
        cout << "Numero negativo";
    }
    else
    {
        cout << "Numero è zero";
    }

    if (num > 0)
    {
        cout << "Numero positivo";
    }
    else if (num < 0)
    {
        cout << "Numero negativo";
    }
    else if (num < 0)
    {
        cout << "Numero negativo";
    }
    else
    {
        cout << "Numero è zero";
    }

    char op = '+';

    switch (op)
    {
    case '+':
        cout << "Somma";
        break;

    case '-':
        cout << "Diff";
        break;

    case '*':
        cout << "Molt";
        break;

    case '/':
        cout << "Div";
        break;

    default:
        cout << "Not available";
        break;
    }

    return 0;
}
