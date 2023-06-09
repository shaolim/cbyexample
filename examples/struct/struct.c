// `struct` is composite data types that group together variables of different data types under a single name.

#include <stdio.h>

// declaring struct
struct student
{
    int id;
    char *name;
    float gpa;
};

// This function is passed by value, which means that all data types in the struct are copied and passed to the function.
// However, if the `struct` is large, it can be more efficient to pass a pointer to the struct instead.
// This avoids unnecessary memory usage and can improve performance.
// Therefore, it is often better to pass the struct by reference, using a pointer to the original data rather than making a copy.
void update_name(struct student s, char *new_name)
{
    // This will not change the value of the original variable.
    s.name = new_name;
}

// This function is passed by reference, which means a pointer to the struct is passed to the function.
void update_gpa(struct student *s, float new_gpa)
{
    // This statement updates the gpa field of the struct pointed to by s with the value of new_gpa.
    s->gpa = new_gpa;

    // It is more idiomatic to use the arrow operator (->) instead of the dereference operator (*) to access the member of a struct through a pointer.
    // This is because it is shorter and more readable.
    // Use (.) if you have a struct variable.
    // Use (->) if you have a pointer to a struct.
}

void printStudent(struct student *s)
{
    printf("Student Id = %d, Name = %s, GPA = %.02f\n", s->id, s->name, s->gpa);
}

int main(void)
{
    // initialize struct
    // option 1
    struct student john = {1, "John Doe", 3.4};
    printStudent(&john);

    // option 2
    struct student jane;
    jane.id = 2;
    jane.name = "Jane Doe";
    jane.gpa = 3.9;
    printStudent(&jane);

    // option 3
    struct student livi = {
        .id = 3,
        .name = "Livi",
        .gpa = 3.8,
    };
    printStudent(&livi);

    update_name(livi, "Tzuyu");
    printStudent(&livi);

    update_gpa(&john, 3.5);
    printf("Updated %s's GPA is %.02f\n", john.name, john.gpa);
}