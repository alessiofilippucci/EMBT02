#include <iostream> // Including the input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    string resp;

    do
    {
        int a, b; // Declaring integer variables width, length, area, and perimeter

        cout << "Calculator\n";                               // Outputting a message indicating program name
        cout << "--------------------------------------\n\n"; // Outputting a separator line

        cout << "Enter first number: "; // Prompting the user to input the first number
        cin >> a;                       // Taking input for the first number

        cout << "\nEnter second number: "; // Prompting the user to input the first number
        cin >> b;                          // Taking input for the first number

        int choice;

        // Display the menu

        cout << "Press 1 to calculate Sum of Numbers\n";
        cout << "Press 2 to calculate Difference of Numbers\n";
        cout << "Press 3 to calculate Product of numbers\n";
        cout << "Press 4 to calculate Division of numbers\n";
        cout << "Press 5 to exit\n";

        // Enter the choice
        cout << "Enter your choice:\n";
        cin >> choice;
        cout << "Choice is " << choice << endl;

        // Display the result
        // according to the choice

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
        case 7:
        {
            cout << "Thank you\n";
            break;
        }
        default:
            cout << "Wrong Input\n";
        }

        cout << "Restart calculator? (y=YES;n=NO)" << endl;

        cin >> resp;
    } while (resp == "y" || resp == "Y" || resp == "YES" || resp == "yes" || resp == "Yes");

    return 0; // Returning 0 to indicate successful program execution
} // End of the main function