#include <stdio.h>
#include <string.h>

// We use structures to make the program effiecient by removing 
//the need to make seperate datatypes and variables for specific work
// Like: Data Management, etc.
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[100];
};
// struct Student Ekjot, Navjot, xyz;

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

    // Quick Quiz
    // Print all the information of any student
    strcpy(Navjot.name, "Navjot Kaur");
    printf("Printing all the information of Navjot:\n");
    printf("ID: %d\n", Navjot.id);
    printf("Full Name: %s\n", Navjot.name);
    printf("ID: %d\n", Navjot.marks);
    printf("Favourite character: %c\n", Navjot.fav_char);

    return 0;
}
