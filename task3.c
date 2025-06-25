#include <stdio.h>

void main() {
    // size
    int size, sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);

    // array input
    int a[size];
    printf("Enter %d values:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    
// actual array
    printf("Actual array:\n");
    for (int i = 0; i < size; i++)
        printf("%d\t", a[i]);

    // reverse array;
    printf("\nReverse array:\n");
    for (int i = size - 1; i >= 0; i--)
        printf("%d\t", a[i]);

    printf("\nSum of array: %d\n", sum);
    
}
