#include <stdio.h>

// void parser
void parser(char *p){
    printf("The Parsed string is: ");
    for (int i = 4; i < 22; i++)
    {
        printf("%c", p[i]);
    }
    
}

int main()
{
    /* Excercise:
        Input:
        <h1> this is a heading</h1>
        Output:
        this is a heading
     */
    char string[] = "<h1> this is a heading </h1>";
    printf("UnParsed String: %s\n", string);
    parser(string);
    return 0;
}
