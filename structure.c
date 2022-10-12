#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[100];
};

int main()
{
    struct Student Ekjot, Navjot, xyz;
    Ekjot.id = 1;
    Navjot.id = 2;
    xyz.id = 3;
    Ekjot.marks = 97;
    Navjot.marks = 92;
    xyz.marks = 83;
    Ekjot.fav_char = 'E';
    Navjot.fav_char = 'N';
    xyz.fav_char = 'X';

    printf("Ekjot got %d marks\n", Ekjot.marks);
    strcpy(Ekjot.name, "Ekjot Singh");
    printf("Ekjot's full name is: %s\n", Ekjot.name);


    return 0;
}
