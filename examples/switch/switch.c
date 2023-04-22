// In C, the switch statement is restrictive as it evaluates an expression to an integer value and jumps to the case that corresponds to that value.

#include <stdio.h>

int main(void)
{
    int day = 2;
    switch (day)
    {
    case 0:
        printf("Monday\n");
        break; // if it hit a `break`, it jumps out of switch
    case 1:
        printf("Tuesday\n");
        break;
    case 2:
        printf("Wednesday\n");
        break;
    case 3:
        printf("Thursday\n");
        break;
    case 4:
        printf("Friday\n");
        break;
    case 5:
        printf("Saturday\n");
        break;
    case 6:
        printf("Sunday\n");
        break;
    default: // if there is no cases match, code in default will be run
        printf("Invalid day\n");
    }

    // you can use character types because those are secretly integers themselves
    char c = 'a';
    switch (c)
    {
    case 'a':
        printf("It's 'a'!\n");
        // Fall through
    case 'b':
        printf("It's 'b'!\n");
        break;
    case 'c':
        printf("It's 'c'!\n");
        break;
    }
}