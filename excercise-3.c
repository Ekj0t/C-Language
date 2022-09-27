#include <stdio.h>
/*
Conversion of units:
km to miles
inch to foot
cm to inch
pound to kgs
inch to meter
*/
int main()
{
    char input;
    float KmtoMile = 0.621371;
    float InchtoFoot = 0.0833333;
    float cmtoInch = 0.393701;
    float PoundtoKg = 0.453592;
    float InchtoMeter = 0.0254;
    float first, second;

    while (1) // Using 1 means keep repeating the cycle till the break occurs
    {
        printf("Enter Q to quit\n        1. km to miles\n        2. inch to foot\n        3. cm to inch\n        4. pound to kgs\n        5. inch to meter\n");
        scanf(" %c", &input);

        switch (input)
        {

        case 'q':
            goto end;
            break;

        case '1':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * KmtoMile;
            printf("%f km is equal to %f miles\n\n\n", first, second);
            goto end;
            break;
        case '2':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * InchtoFoot;
            printf("%f inches is equal to %f foot \n\n\n", first, second);
            goto end;
            break;
        case '3':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * cmtoInch;
            printf("%f cm is equal to %f inch \n\n\n", first, second);
            goto end;
            break;
        case '4':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * PoundtoKg;
            printf("%f pound is equal to %f kg\n\n\n", first, second);
            goto end;
            break;
        case '5':
            printf("Enter the quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * InchtoMeter;
            printf("%f inch is equal to %f meter\n\n\n", first, second);
            goto end;
            break;
        default:
            break;
        }
    }
end:
    printf("Quitting the process\n");

    return 0;
}