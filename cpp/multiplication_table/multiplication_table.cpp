#include <iostream> // Include input-output stream header

using namespace std; // Using standard namespace to avoid writing std::

int main() // Start of the main function
{
    int j, i, n; // Declaration of integer variables 'j' (loop counter), 'i' (loop counter), 'n' (user input for the limit of the multiplication table)

    cout << "\n\n Display the multiplication table vertically from 1 to n:\n"; // Display message on the console
    cout << "-------------------------------------------------------------\n";
    cout << "Input the number up to: "; // Prompt the user to input the limit for the multiplication table
    cin >> n;                             // Read the input value as the limit

    cout << "Multiplication table from 1 to " << n << endl; // Display a message showing the range of the multiplication table

    for (i = 1; i <= 10; i++) // Loop for numbers from 1 to 10 (rows of the table)
    {
        for (j = 1; j <= n; j++) // Nested loop for creating the multiplication table columns
        {
            cout << j << "x" << i << "=" << i * j << "\t"; // Display the product of 'i' and 'j' with proper formatting
        }
        cout << endl; // Move to the next line after printing each row of the table
    }
}