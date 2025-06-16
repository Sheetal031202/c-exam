#include <stdio.h>

void main()
{

    // size input
    int size;
    printf("Enter size of array:");
    scanf("%d", &size);

    // array input
    int a[size];
    int *ptr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter %d value\n", i + 1);
        scanf("%d", &a[i]);
    }

    // printf array
    printf("Actual array\n");
    for (int i = 0; i < size; i++)
    {
        ptr[i] = &a[i];
        printf("%d \t", *ptr[i]);
    }

    printf("\n\nCube array\n");
    for (int i = 0; i < size; i++)
    {

        printf("%d \t", *ptr[i] * *ptr[i] * *ptr[i]);
    }
}