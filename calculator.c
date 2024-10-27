#include<stdio.h>
int main()
{
    double n1,n2,result;
    int op;
    printf("Enter any arithmetic operator: ");
    scanf("%d", &op);
    printf("Enter two positive number: ");
    scanf("%lf%lf", &n1,&n2);

    switch(op)
    {
    case '+':
        printf("Sum of two numbers: %d + %d = %d",n1, n2, result);
        break;
    case '-':
        printf("Substraction of two numbers: %d - %d = %d", n1, n2, result);
        break;
    case '*':
        printf("Multiplication of two numbers: %d * %d = %d", n1, n2, result);
        break;
    case '/':
        printf("Division of two numbers: %d / %d = %d", n1, n2, result);
        break;
    default:
        printf("Not a valid operator\n");
        break;
    }


    return 0;
}
