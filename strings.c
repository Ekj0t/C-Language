#include <stdio.h>

void Printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    // char str[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0'};
    char str[100];
    printf("Enter a sentence under 100 characters:\n");
    gets(str); // inputs whole line with spaces
    printf("Using custom function\n");
    Printstr(str);
    printf("Using printf %s\n", str); // %s used to tell printf that the corresponding argument is to be treated as a string
    printf("Using puts: \n");
    puts(str); // outputs whole line with spaces
    return 0;
}
