#include <stdio.h>
int main()
{
    int age;
    printf("Enter you age:\n");
    scanf("%d", &age);
    switch (age)
    {
    case 18:
        printf("You are 18");
        break;

    default:
        break;
    }
    return 0;
}
