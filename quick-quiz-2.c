#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    printf("Enter the name of first friend: ");
    gets(str1);
    printf("Enter the name of first friend: ");
    gets(str2);

    printf("%s is a friend of %s", str1, str2);

    return 0;
}
