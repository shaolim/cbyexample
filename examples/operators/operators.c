#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // arithmetics
    int a = 10;
    a = a + 3; // equal with `a += 3;`
    a = a - 8; // equal with `a -= 8;`
    a = a * 9; // equal with `a *= 9;`
    a = a / 3; // equal with `a /= 3;`
    a = a % 5; // equal with `a %= 5;`

    // ternary operator
    int m = 10, n = 5;
    printf("m = %d, n = %d. \n", m, n);
    m += n > 10 ? 17 : 37;
    printf("m = %d, n = %d. \n", m, n);

    printf("the number %d is %s \n", n, n % 2 == 0 ? "even" : "odd");

    // pre and post increment and decrement
    int i = 0, j = 0;
    i++; // post increment
    i--; // post decrement
    ++i; // pre increment
    --i; // pre decrement

    i = 10;
    j = 5 + i++;              // compute 5 + i, then increment i
    printf("%d, %d\n", i, j); // prints 11, 5

    i = 10;
    j = 5 + ++i;              // increment i, then compute 5 + i
    printf("%d, %d\n", i, j); // prints 11, 6

    // conditional operator
    int c = 1, d = 2;
    // `c == d` is true if c is equivalent to d
    printf("%d == %d is %s\n", c, d, c == d ? "true" : "false");

    // `c != d` is true if c is not equivalent to d
    printf("%d != %d is %s\n", c, d, c != d ? "true" : "false");

    // `c < d` is true if c is less than d
    printf("%d < %d is %s\n", c, d, c < d ? "true" : "false");

    // `c > d` is true if c is greater than d
    printf("%d > %d is %s\n", c, d, c > d ? "true" : "false");

    // `c <= d` is true if c is less than equal to d
    printf("%d <= %d is %s\n", c, d, c <= d ? "true" : "false");

    // `c >= d` is true if c is greater than equal to d
    printf("%d >= %d is %s\n", c, d, c >= d ? "true" : "false");

    // boolean operator
    //`"&&` operator for "and"
    // `||` operator for "or"
    // `!` operator for "not"
    int x = 10, y = 20;
    if (x < 11 && y > 19)
    {
        printf("%d is less than 11 and %d is more than 19\n", x, y);
    }

    if (x < 11 || y > 20)
    {
        printf("%d is less than 11 or %d is more than 20\n", x, y);
    }

    if (!(x < 12))
    {
        printf("%d is not less than 12", x);
    }

    // the `sizeof` operator
    // `sizeof` is used to determine the size (in bytes) of variable or data type used in memory
    int num;
    size_t size = sizeof(num);
    printf("Size of num: %zu bytes\n", size);
    printf("size of float: %zu bytes\n", sizeof(float));
    printf("size of char: %zu bytes\n", sizeof(char));
}