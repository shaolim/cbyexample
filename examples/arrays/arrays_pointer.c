// Pointers and arrays are closely related in C, and in many cases, they can be used interchangeably.
// This is because arrays are essentially just pointers to the first element of the array,
// and pointer arithmetic can be used to access other elements in the array

#include <stdio.h>

// passing as pointer to the first element
void times2(int *a, int len)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i] * 2);
    }
}

// passing as array notation
void times3(int a[], int len)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i] * 3);
    }
}

// passing as array notation with size
void times4(int a[5], int len)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i] * 4);
    }
}

void double_array(int *a, int len)
{
    // Multiple each element by 2
    // This doubles the value of the array in main() since it points to the same array in memory.
    for (int i = 0; i < len; i++)
    {
        a[i] *= 2;
    }
}

// For array multidimension, the compiler needs the second dimension
// so it can figure out how far in memory to skip for each increment of the first dimension.
void print2D(int arr[2][3])
{
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("arr[%d][%d] = %d ", row, col, arr[row][col]);
        }
        printf("\n");
    }
}

int main(void)
{
    int a[5] = {11, 22, 33, 44, 55};
    int *p;

    p = a;
    // this is equal to
    // p = &a[0];

    printf("%d\n", *p);

    int x[5] = {1, 2, 3, 4, 5};
    double_array(x, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }

    int arr2D[2][3] = {
        {1, 2, 3},
        {4, 5, 6},
    };

    print2D(arr2D);
}