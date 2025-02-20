#include <iostream> // Including the input-output stream header file

using namespace std; // Using the standard namespace

void PrintAppName()
{
    cout << "Calculator\n";                               // Outputting a message indicating program name
    cout << "--------------------------------------\n\n"; // Outputting a separator line
}

int GetNumber(string msg)
{
    int num;
    cout << msg; // Prompting the user to input a number
    cin >> num;  // Taking input for the number
    return num;
}

void DisplayMenu()
{
    cout << "Press 1 to calculate Sum of Numbers\n";
    cout << "Press 2 to calculate Difference of Numbers\n";
    cout << "Press 3 to calculate Product of numbers\n";
    cout << "Press 4 to calculate Division of numbers\n";
    cout << "Press 5 to exit\n";
}

int MakeChoice()
{
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice < 1 || choice > 5)
    {
        cout << "Choice not valid!\n";
        return MakeChoice();
    }
    else
    {
        return choice;
    }
}

void Calculate(int a, int b, int choice)
{
    // Display the result
    switch (choice)
    {
    case 1:
    {
        cout << "Sum is " << (a + b) << "\n";
        break;
    }
    case 2:
    {
        cout << "Difference is " << (a - b) << "\n";
        break;
    }
    case 3:
    {
        cout << "Product is " << (a * b) << "\n";
        break;
    }
    case 4:
    {
        cout << "Division is " << (a / b) << "\n";
        break;
    }
    case 5:
    {
        cout << "Thank you\n";
        break;
    }
    default:
        cout << "Wrong Input\n";
    }
}

void StartCalculator()
{
    int a, b; // Declaring integer variables width, length, area, and perimeter

    PrintAppName();

    a = GetNumber("Enter first number: ");
    b = GetNumber("Enter second number: ");

    int choice;

    DisplayMenu();

    // Enter the choice
    choice = MakeChoice();

    Calculate(choice, a, b);
}

int main() // Start of the main function
{
    string resp;

    do
    {
        StartCalculator();
        cout << "Restart calculator? (y=YES;n=NO)" << endl;
        cin >> resp;
    } while (resp == "y" || resp == "Y" || resp == "YES" || resp == "yes" || resp == "Yes");

    return 0; // Returning 0 to indicate successful program execution
} // End of the main function