// Pointer is a variable that holds a memory address.

#include <stdio.h>

// This function is passed by reference, which means a pointer to the int is passed to the function.
void increment_with_pointer(int *p)
{
    // Pointers refer to other variables by storing their memory addresses,
    // and by dereferencing the pointer, we can access the value stored in the variable that it points to.

    // This statement means we are dereferencing the pointer p (*p) and then adding 1 to the value it points to.
    // This causes the value of the original variable to be changed.
    *p = *p + 1;
}

// This function is passed by value, which means a copy of the value of the original variable is passed to the function.
void increment(int p)
{
    // By adding 1 to this variable, it doesn't change the value of the original variable.
    // This is because the changes made to the variable in the function are made on a copy of the original value.
    p = p + 1;
}

int main(void)
{
    int i = 10;

    // j's type is "pointer to an int", or "int-pointer".
    int *j;

    // j is assigned the address of i. Now j "points to" i.
    // The `&i` syntax gives the memory address of i.
    j = &i;

    printf("value of i is %d\n", i);

    // `%p` is used to print a pointer.
    printf("address i is %p\n", &i);
    printf("value of j is %p\n", j);

    // Passing the value of i to the increment function. The original i remains unchanged.
    increment(i);

    // Passing the address of i to the increment_with_pointer function. This changes the value of i.
    increment_with_pointer(&i);

    printf("value of i is %d\n", i);
    printf("dereference j is %d\n", *j);

    // Passing the value of j (which is the address of i) to the increment_with_pointer function. This changes the value of i.
    increment_with_pointer(j);

    printf("value of i is %d\n", i);
    printf("dereference j is %d\n", *j);
}