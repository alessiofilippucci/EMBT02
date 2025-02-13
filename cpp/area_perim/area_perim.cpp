#include <iostream> // Including the input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    int width, lngth, area, peri; // Declaring integer variables width, length, area, and perimeter

    cout << "\n\n Find the Area and Perimeter of a Rectangle :\n"; // Outputting a message indicating calculation of rectangle area and perimeter
    cout << "-------------------------------------------------\n"; // Outputting a separator line

    cout << " Input the length of the rectangle : "; // Prompting the user to input the length of the rectangle
    cin >> lngth;                                    // Taking input for the length from the user

    cout << " Input the width of the rectangle : "; // Prompting the user to input the width of the rectangle
    cin >> width;                                   // Taking input for the width from the user

    area = (lngth * width);     // Calculating the area of the rectangle: length * width
    peri = 2 * (lngth + width); // Calculating the perimeter of the rectangle: 2 * (length + width)

    cout << " The area of the rectangle is : " << area << endl;      // Displaying the calculated area of the rectangle
    cout << " The perimeter of the rectangle is : " << peri << endl; // Displaying the calculated perimeter of the rectangle
    cout << endl;                                                    // Outputting a blank line for better readability

    // draw the rectangle
    cout << " Here is the rectangle: \n"; // Outputting a message indicating the rectangle drawing

    for (int i = 0; i < lngth; i++) // Looping through the length of the rectangle
    {
        for (int j = 0; j < width; j++) // Looping through the width of the rectangle
        {
            if (i == 0 || i == lngth - 1 || j == 0 || j == width - 1) // Checking if the current position is on the border of the rectangle
            {
                cout << "*"; // Outputting a star to represent the border of the rectangle
            }
            else
            {
                cout << " "; // Outputting a space to represent the inside of the rectangle
            }
        }
        cout << endl; // Outputting a newline character to move to the next line
    }

    return 0; // Returning 0 to indicate successful program execution
} // End of the main function