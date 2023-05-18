#include <stdio.h>

// Add the name 'point' to the anonymous struct
typedef struct
{
    int x, y;
} point;

typedef struct animal
{
    char *name;
    int leg_count;
} animal;

typedef int count; // make "counter" an alias for int

int main(void)
{
    point p = {.x = 20, .y = 40};
    printf("%d %d\n", p.x, p.y);

    struct animal dog = {.name = "tzuyu", .leg_count = 4};
    printf("name=%s, leg_count=%d\n", dog.name, dog.leg_count);

    animal cat = {.name = "livi", .leg_count = 4};
    printf("name=%s, leg_count=%d\n", cat.name, cat.leg_count);

    count counter = 1;
    printf("counter=%d\n", counter);

    return 0;
}