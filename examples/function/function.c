// Function can accept a variety of arguments and return a value

#include <stdio.h>

// In C, function need to be defined before it used
// if it's not declared, compiler will return error
int add(int a, int b)
{
    return a + b;
}

// Function prototype
// By using function prototype, you can notify the compiler in advance that
// you’ll be using a function of a certain type that has a certain parameter list.
int substract(int a, int b);

// In function, if there are no parameter, it's good to put void for empty parameter
// it tells to compiler that there is no additional information about the parameters to the function
// It effectively turns off all that type checking.
void print_hello(void);

// This will run well too, but it's good to put `void` in for empty parameter lists.
void print_world()
{
    printf("World\n");
}

int main(void)
{
    int i = 10;
    int j = add(i, 5);
    printf("%d + 5 is %d\n", i, j);

    int k = substract(i, 5);
    printf("%d - 5 is %d\n", i, k);

    print_hello();
    print_world();
}

// Implementation of function prototype.
int substract(int a, int b)
{
    return a - b;
}

void print_hello()
{
    printf("Hello\n");
}
