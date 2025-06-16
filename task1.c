#include <stdio.h>

// simple calculate:
void main()
{

    // instruction
    printf("1=Addition\n");
    printf("2=Subtraction\n");
    printf("3=Multiplication\n");
    printf("4=Devision\n\n");

    // choice input
    int choice;
    printf("Enetr your choice\n");
    scanf("%d", &choice);

    // number input:
    int a, b;
    printf("Enetr first number :");
    scanf("%d", &a);
    printf("Enetr second number :");
    scanf("%d", &b);

    // switch case
    switch (choice)
    {
    case 1:
        printf("\nAddition of %d and %d is = %d\n", a, b, a + b);
        break;

    case 2:
        if (a > b)
        {
            printf("\n Subtraction of %d and %d is = %d\n", a, b, a - b);
        }

        else
        {
            printf("\n Subtraction of %d and %d is = %d\n", a, b, b - a);
        }
        break;
    case 3:
        printf("\n Multiplication of %d and %d is = %d\n", a, b, a * b);
        break;
    case 4:
        if (a > b)
        {
            printf("\n Subtraction of %d and %d is = %d\n", a, b, a / b);
        }

        else
        {
            printf("\n Devision of %d and %d is = %d\n", a, b, b / a);
        }
        break;
    default:
        printf("Invalid Choice");
        break;
    }
}