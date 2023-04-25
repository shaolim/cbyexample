// Array is collection of elements that are stored in contiguous memory locations.

#include <stdio.h>

void print_array(int arr[], int length)
{
    printf("[");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

void try_to_print_length_of_array(int arr[])
{
    // This will print 8
    // It's because it returns the size of the pointer, not the array itself.
    printf("sizeof arr = %zu\n", sizeof(arr));
    // This will print 4
    printf("sizeof int = %zu\n", sizeof(int));
    // This will print 2 from 8 / 4 = 2. Wrong length!
    printf("lenght of arr = %zu\n", sizeof arr / sizeof(int));
}

int main(void)
{
    // Initialize array

    // Option 1
    int arr[4];
    // index of array start with 0
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    // This is will print [1 2 3 4 ]
    print_array(arr, 4);

    // Option 2
    // You can assign values right away and put array length on it.
    int arr2[4] = {1, 2, 3, 4};
    // This is will print [1 2 3 4 ]
    print_array(arr2, 4);

    // if you initialize with fewer value than array lenght, it will be automatically assigned to 0
    int arr3[4] = {1, 2};
    // This is will print [1 2 0 0 ]
    print_array(arr3, 4);

    // Option 3
    // You can assign values without put array length on it.
    int arr4[] = {1, 2, 3, 4};
    // This is will print [1 2 3 4 ]
    print_array(arr4, 4);

    // `%zu` is used to print a value of type `size_t`
    printf("sizeof arr[] = %zu\n", sizeof(arr));
    printf("sizeof int = %zu\n", sizeof(int));

    // C doesn't have build-in function to get leght of array.
    // So we need to calculate length of array using sizeof()
    // The basic idea is to take the sizeof the array and then divide that by the size of each element to get the length.
    int length_of_arr = sizeof(arr) / sizeof(int);
    printf("lenght of arr = %d\n", length_of_arr);

    // But calculate length of array it only works in the scope that array defined
    // It's because when we pass an array to a function, it only passes the pointer of the array to the function.
    try_to_print_length_of_array(arr);

    // In C, it will not throw an error if we try to access data out of array length.
    // However, it will return unexpected result.
    for (int i = 0; i < 10; i++)
    {
        printf("arr[%d] = %d \n", i, arr[i]);
    }

    // Multidimensional Array
    // You can compose multidimensional array
    int array2D[2][2] = {
        {0, 1},
        {1, 0},
    };
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            printf("(%d,%d) = %d\n", row, col, array2D[row][col]);
        }
    }
}
