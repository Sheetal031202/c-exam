#include <stdio.h>

int sum(int a[], int size)
{
    int add = 0;
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
        add = a[i] + add;
    }
    return add;
}

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

    // printf array

    printf("\n\nsum is %d\n", sum(a, size));
}
