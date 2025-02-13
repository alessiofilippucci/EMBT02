// C Program to illustrate the array declaration
#include <stdio.h>

int main()
{
    // declaring array of integers
    int arr_int[5];
    // declaring array of characters
    char arr_char[5];

    // array initialization using initialier list
    int arr[5] = {10, 20, 30, 40, 50};

    // array initialization using initializer list without
    // specifying size
    int arr1[] = {1, 2, 3, 4, 5};

    // array initialization using for loop
    float arr2[5];
    
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = (float)i * 2.1;
    }

    // accessing element at index 2 i.e 3rd element
    printf("Element at arr[2]: %f\n", arr2[2]);

    // accessing element at index 4 i.e last element
    printf("Element at arr[4]: %f\n", arr2[4]);

    // accessing element at index 0 i.e first element
    printf("Element at arr[0]: %f", arr2[0]);

    return 0;
}

//es. data una lista di num in input, calcolare la media