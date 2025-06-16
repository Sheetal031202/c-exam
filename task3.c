#include <stdio.h>

void main()
{
    // size input
    int size;
    printf("Enter size of array:");
    scanf("%d", &size);

    // array input
    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d value\n", i + 1);
        scanf("%d", &a[i]);
    }

    // printf  actual  array
    printf("Actual array\n");
    for (int i = 0; i < size; i++)
    {

        printf("%d \t", a[i]);
    }

    // printf  reverse  array
    int b[size];
    printf("\nReverse array\n");
    for (int i = size - 1; i >= 0; i--)
    {
        b[i] = a[i];
        printf("%d\t", b[i]);
    }

    // sum
    int sum = 0;
    for (int i = 0; i < size; i++)
    {

        sum = a[i] + sum;
    }
    printf("\n\n sum of array is %d", sum);
}