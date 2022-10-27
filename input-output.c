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
3."rb" for read in binary
4."a" for adding to existing file
*/
#include <stdio.h>

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

    return 0;
}
