#include <iostream>
using namespace std;

int main()
{
    // Integer data types
    int a = 10;
    short b = 20;
    long c = 30;
    cout << "Integer data types: " << endl;
    cout << "int: " << a << endl;
    cout << "short: " << b << endl;
    cout << "long: " << c << endl;

    cout << endl;

    // Floating-point data types
    float e = 3.14f;
    double f = 3.141592;
    cout << "Floating-point data types: " << endl;
    cout << "float: " << e << endl;
    cout << "double: " << f << endl;

    cout << endl;

    // Character data types
    char h = 'a';
    wchar_t i = L'b';
    char16_t j = u'c';
    char32_t k = U'd';
    cout << "Character data types: " << endl;
    cout << "char: " << h << endl;
    wcout << "wchar_t: " << i << endl;
    cout << "char16_t: " << j << endl;
    cout << "char32_t: " << k << endl;

    cout << endl;

    // Boolean data type
    bool l = true;
    bool m = false;
    cout << "Boolean data type: " << endl;
    cout << "true: " << l << endl;
    cout << "false: " << m << endl;

    cout << endl;
    
    // String data type
    string n = "Hello, world!";
    cout << "String data type: " << endl;
    cout << n << endl;

    return 0;
}
