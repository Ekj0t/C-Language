#include <stdio.h>
#include <string.h>

// Not best solution
// int arrayRev(int *array)
// {
//     for (int i = 6; i >= 0; i--)
//     {
//         printf("%c", array[i]);
//     }
//     return 0;
// }
int arrayRev(int arr[]){

    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        // Swap item arr[i] with arr[6-i]
        temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp;
    }
    

}

int main()
{
    int arr[] = {1,2,3,4,5,6,67};
    printf("Before reversing the array\n");
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
    arrayRev(arr);
    printf("After reversing the array:\n");
    for (int i = 0; i < 7; i++)
    {
    printf("The value of element %d is %d\n", i, arr[i]);
        
    }
    
    

    return 0;
}
