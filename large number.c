#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two positive number: ");
    scanf("%d %d", &num1, &num2);

    if(num1>num2)
        {
            printf("The large number is : %d", num1);
        }
        else if(num2>num1)
        {
            printf("The large number is : %d", num2);
        }
        else
        {
            printf("Numbers are equal");
        }
        return 0;
}
