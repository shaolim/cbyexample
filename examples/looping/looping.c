// C has three styles of looping: `while`, `do-while`, and `for`

#include <stdio.h>

int main(void)
{
    // while statement
    // while statement will run code in block as long as condition in while statement is `true`
    int i = 0;
    while (i < 10)
    {
        printf("while: i = %d\n", i);
        i++;
    }

    // do-while statement
    // do-while statement will executed code in body at least once, because the loop condition is not checked until
    // after the body of the loop runs.
    i = 10;
    do
    {
        printf("do-while: i = %d\n", i);
    } while (i < 10);

    // for statement
    // for loop and while loop are both used for iteration, but for loop is preferred
    // when there is a need to specify initialization, condition, and increment/decrement in a more concise way,
    // making the code more readable and maintainable.
    for (int j = 0; j < 10; j++)
    {
        printf("for: j = %d\n", j);
    }
}