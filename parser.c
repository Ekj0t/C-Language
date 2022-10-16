#include <stdio.h>
#include <string.h>

// void parser
void parser(char *string)
{
    int in = 0; // Variable to see whether we are inside the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    } // Printed string with spaces
    string[index] = '\0';// Ended the string
    // Removing the spaces from the begining
    while (string[0]== ' ')
    {
        // Shift the string to the left
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i+1];
        }
        
    }
    // Removing the spaces from the end
    while (string[strlen(string) -1]==' ')
    {
        string[strlen(string) -1] ='\0';
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
    char string[] = "<h1>   this is a heading    </h1>";
    printf("UnParsed String: %s\n", string);
    parser(string);
    printf("The Parsed string is ~~%s~~", string);
    return 0;
}
