#include <stdio.h>
#include <string.h>

/*
You manage a travel agency, and you want your n drivers to input their following details:
1.Name of the driver
2.Driving License Number
3.Route
4.Kms
*/
typedef struct driver_Details
{
    char name[100];
    char DlNo[100];
    char Route[100];
    int kms;
} details;

details d1, d2, d3;
void FirstDriver()
{

    // First Driver
    printf("\nEnter the details of first driver\n");

    printf("Enter the name of first driver: ");
    scanf("%s", &d1.name);
    printf("Enter the DlNo of first driver: ");
    scanf("%s", &d1.DlNo);
    printf("Enter the Route of first driver: ");
    scanf("%s", &d1.Route);
    printf("Enter the Kms of first driver: ");
    scanf("%d", &d1.kms);
}
void SecondDriver()
{

    // Second Driver
    printf("\nEnter the details of second driver\n");

    printf("Enter the name of second driver: ");
    scanf("%s", &d2.name);
    printf("Enter the DlNo of second driver: ");
    scanf("%s", &d2.DlNo);
    printf("Enter the Route of second driver: ");
    scanf("%s", &d2.Route);
    printf("Enter the Kms of second driver: ");
    scanf("%d", &d2.kms);
}
void ThirdDriver()
{

    // Third Driver
    printf("\nEnter the details of third driver\n");

    printf("Enter the name of third driver: ");
    scanf("%s", &d3.name);
    printf("Enter the DlNo of third driver: ");
    scanf("%s", &d3.DlNo);
    printf("Enter the Route of third driver: ");
    scanf("%s", &d3.Route);
    printf("Enter the Kms of third driver: ");
    scanf("%d", &d3.kms);
}

// Print Value of drivers
void PrintFirstDriver()
{

    // First Driver
    printf("The details of first driver\n");

    printf("Name of first driver: %s\n", d1.name);
    printf("DlNo of first driver: %s\n", d1.DlNo);
    printf("Route of first driver: %s\n", d1.Route);
    printf("Kms of first driver: %d\n", d1.kms);
}
void PrintSecondDriver()
{

    // Second Driver
    printf("The details of first driver\n");

    printf("Name of Second driver: %s\n", d2.name);
    printf("DlNo of Second driver: %s\n", d2.DlNo);
    printf("Route of Second driver: %s\n", d2.Route);
    printf("Kms of Second driver: %d\n", d2.kms);
}
void PrintThirdDriver()
{

    // Third Driver
    printf("the details of first driver\n");

    printf("Name of third driver: %s\n", d3.name);
    printf("DlNo of third driver: %s\n", d3.DlNo);
    printf("Route of third driver: %s\n", d3.Route);
    printf("Kms of third driver: %d\n", d3.kms);
}

int main()
{
    printf("Enter the details of driver\n");

    FirstDriver();
    SecondDriver();
    ThirdDriver();

    printf("Choose any one\n");
    printf("1. For accessing the value of any Driver\n");
    printf("2. To Quit program\n");
    int choose;
    scanf("%d", &choose);
    if (choose == 1)
    {
        printf("Choose any one driver:\n");
        printf("1. First Driver\n");
        printf("2. Second Driver\n");
        printf("3. Third Driver\n");
        int DriverChoose;
        scanf("%d", &DriverChoose);
        if (DriverChoose == 1)
        {
            PrintFirstDriver();
        }
        if (DriverChoose == 2)
        {
            PrintSecondDriver();
        }
        if (DriverChoose == 3)
        {
            PrintThirdDriver();
        }
        else
        {
            goto end;
        }
    }
    else if (choose == 2)
    {
        goto end;
    }
    else
    {
        goto end;
    }

end:
    printf("Quitting the program");
    return 0;
}
