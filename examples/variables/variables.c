// Variable is human-readable name that refers to some data in memory

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // interger
    int i = 2;
    printf("i = %d\n", i);

    // float
    float f = 3.14;
    printf("f = %f\n", f);

    // char
    char c = 'h';
    printf("c = %c\n", c);

    // string
    char *s = "Hello, World!";
    printf("s = %s\n", s);

    // declare multiple variable at once
    int m = 10, n = 5;
    printf("m = %d, n = %d\n", m, n);

    // C by default didn't have boolean type.
    // In C, 0 means "false" and non-zero means "true"
    int x = 1;
    if (x)
    {
        printf("x is true\n");
    }

    int y = 0;
    if (!y)
    {
        printf("y is false\n");
    }

    // #include <stdbool.h> to get access to some symbolic names `bool`
    bool b = true;
    printf("b is %d\n", b);
    b = false;
    printf("b is %d\n", b);
}