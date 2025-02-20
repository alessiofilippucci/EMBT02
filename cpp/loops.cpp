#include <iostream>
#include <string>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    char values[] = {'A', 'B', 'C'};

    int i = 0;

    for (i = 0; i < size(values); i++)
    {
        cout << values[i] << endl;
    }

    // Initialization expression
    string value;

    cout << "Se vuoi uscire premi q\n";
    cin >> value;

    // Test expression
    while (value != "q")
    {
        // loop body
        cout << "OK\n";

        cout << "Se vuoi uscire premi q\n";
        cin >> value;
    }

    string value;

    do
    {
        // Update expression

        int a, b, r;
        char op;

        cout << "Inserisci un carattere:" << endl;
        cin >> op;

        cout << "Inserisci un numero intero:" << endl;
        cin >> a;

        cout << "Inserisci un altro numero intero:" << endl;
        cin >> b;

        cout << a + b << endl;

        cout << "Vuoi continuare? (yes = SI, no = NO)";
        cin >> value;

    } while (value != "NO");

    return 0;
}
