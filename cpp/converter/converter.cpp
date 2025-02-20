#include <iostream>
#include <string>
using namespace std;

double currencyCoeff[] = {1.56, 0.86, 130.0, 1.08, 1.57};
string currencyNames[] = {"USD", "GBP", "JPY", "CHF", "AUD"};

void GetNumber(int &n)
{
    cin >> n;
    if (!cin.good())
    {
        cout << "Not valid\n";
        cin.clear();
        cin.ignore(INT_MAX, '\n'); // NB: preferred method for flushing cin
        GetNumber(n);
    }
}

void GetNumber(double &n)
{
    cin >> n;
    if (!cin.good())
    {
        cout << "Not valid\n";
        cin.clear();
        cin.ignore(INT_MAX, '\n'); // NB: preferred method for flushing cin
        GetNumber(n);
    }
}

void PrintHelper()
{
    cout << "Enter the number corresponding to the currency to convert to from EUR:\n";

    for (int i = 1; i <= size(currencyNames); i++)
    {
        cout << i << " - " << currencyNames[i - 1] << " (" << currencyCoeff[i - 1] << ")\n";
    }

    cout << endl;
}

void GetCurrency(int &selectedCurrency)
{
    PrintHelper();

    int currency;

    GetNumber(currency);

    if (currency < 1 || currency > size(currencyNames))
    {
        cout << "Currency not available\n\n";
        GetCurrency(selectedCurrency);
    }
    else
    {
        selectedCurrency = currency;
        cout << endl;
    }
}

void GetValue(double &value)
{
    cout << "Enter the value to be converted: ";
    GetNumber(value);
    cout << endl;
}

void Convert(double value, int selectedCurrency, double &result)
{
    result = value * currencyCoeff[selectedCurrency - 1];
}

void PrintResult(double value, double result, string currencyName)
{
    cout << value << " EUR = " << result << " " << currencyName << endl;
    cout << endl;
}

void StartConverter()
{
    int selectedCurrency;
    double value;
    double result;
    GetCurrency(selectedCurrency);
    GetValue(value);
    Convert(value, selectedCurrency, result);
    PrintResult(value, result, currencyNames[selectedCurrency - 1]);
}

int main()
{
    StartConverter();
    return 0;
}