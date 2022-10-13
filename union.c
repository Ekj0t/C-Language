#include <stdio.h>
#include <string.h>

// Union is a user defined data type (Very similar to structure)
/*IF we use union then it will only use any one which is given at last and will
    corrupt all other information. */
// Struct takes more memory but stores data safely but union doesn't
union Student
{
    int id;
    int marks;
    char fav_char;
    char name[100];
};

int main()
{
    union Student s1;
    s1.id = 1;
    s1.marks = 76;
    s1.fav_char = 'a';
    strcpy(s1.name, "Ekjot");

    printf("ID: %d\n", s1.id);
    printf("Marks: %d\n", s1.marks);
    printf("Fav_char: %c\n", s1.fav_char);
    printf("Name: %s\n", s1.name);
    return 0;
}
