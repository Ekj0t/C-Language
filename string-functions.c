#include <stdio.h>
#include <string.h> // Importing this file to work with string functions.

int main()
{
    char s1[] = "ekjot";
    char s2[] = "singh";
    char s3[] = "hello";
    char s4[] = "world";
    char s5[99];
    printf("length of string2 is %d\n", strlen(s2));
    printf("length of string1 is %d\n", strlen(s1));
    printf("The initial string-1 is: ");
    puts(s1);
    printf("The reversed string-1 is: ");
    puts(strrev(s1));
    printf("The initial string-2 is: ");
    puts(s2);
    printf("The reversed string-2 is: ");
    puts(strrev(s2));
    puts(strrev(s1));
    puts(strrev(s2));
    strcpy(s5, strcat(s3, s4));
    puts(s5);
    printf("The strcmp for s1, s2 returned %d", strcmp(s1, s2));
    return 0;
}
