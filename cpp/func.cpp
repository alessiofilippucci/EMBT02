#include <iostream>
using namespace std;

// Following function that takes two parameters 'x' and 'y'
// as input and returns max of two input numbers
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

// function that takes a string as input
// and modifies the value of the string to
// "Modified in the function funcByValue()"
// but the original string remains unchanged
void funcByValue(string str)
{
    str = "Modified in the function funcByValue()";
}

// function that takes a reference as input
// and modifies the value referred by the reference
// to "Modified in the function funcByReference()"
void funcByReference(string &str) // should be initialized
{
    str = "Modified in the function funcByReference()";
}

// function that takes a pointer as input
// and modifies the value pointed by the pointer
// to "Modified in the function funcWithPointer()"
void funcWithPointer(string *str) // can be null value
{
    *str = "Modified in the function funcWithPointer()";
}

// function that returns a string
string getValue()
{
    return "This is  C++";
}

// program of function overloading when number of arguments vary
int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

// Program of function overloading with different types of arguments
int mul(int a, int b)
{
    return a * b;
}

float mul(double x, int y)
{
    return x * y;
}

// main function that doesn't receive any parameter and
// returns integer
int main()
{
    // int a = 10, b = 20;

    // // Calling above function to find max of 'a' and 'b'
    // int m = max(a, b);

    // cout << "m is " << m << endl;

    string myString = "Hello, World!";

    funcByValue(myString);
    cout << myString << endl;

    funcByReference(myString);
    cout << myString << endl;

    funcWithPointer(&myString);
    cout << myString << endl;

    int res = mul(5.5, 6.3);
    cout << res << endl;

    // string greeting = getValue();
    // cout << greeting << endl;

    return 0;
}