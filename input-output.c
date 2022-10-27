/*
In C we can perform these high level operations on files:
1. Creating files
2. Opening a file
3. Closing a file
4. Reading from and writing to a file
*/

/*
Different modes of file handling in C are:
1."r" for read
2."w" for write
3."a" for adding to existing file
4."r+" for both reading and writing
5."w+" for read and write, initializes file to zero and creates one if it not exists
6."a+" for opens a file both read and write, reading will start from beggining but we can only append to file

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //  Basics of File Handling In C language, while file handling is done a word FILE is used.
    FILE *ptr = NULL;
    char string[] = "My name is Ekjot Singh";
    // Reading a file
    ptr = fopen("myfile.txt", "r"); // fopen function for opening a file
    fscanf(ptr, "%s", string);      // reading the string
    printf("The content of file is ~~%s~~\n", string);

    // Writing to a file
    ptr = fopen("myfile.txt", "w");
    fprintf(ptr, "%s", string);

    // Writing to existing file and adding data
    ptr = fopen("myfile.txt", "a");
    fprintf(ptr, "%s", string);

    FILE *xyz = NULL;
    xyz = fopen("testfile.txt", "r+");
    char *c = fgetc(xyz);
    printf("The character I read was %c\n", c);
    c = fgetc(xyz);
    printf("The character I read was %c\n", c);

    char str[4];
    fgets(str, 5, xyz);
    printf("The string is %s\n", str);

    fputc('o', xyz);
    fputs("this is harry", xyz);

    fclose(xyz);

    return 0;
}
