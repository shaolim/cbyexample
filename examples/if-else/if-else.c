#include <stdio.h>

int main(void)
{
    int i = 10;
    if (i > 9)
    {
        printf("%d is greater than 9\n", i);
    }

    if (i % 2 == 0)
    {
        printf("%d is even\n", i);
    }
    else
    {
        printf("%d is odd\n", i);
    }

    if (i < 0)
    {
        printf("%d is negative\n", i);
    }
    else if (i < 10)
    {
        printf("%d has 1 digit\n", i);
    }
    else
    {
        printf("%d has multiple digits\n", i);
    }
}