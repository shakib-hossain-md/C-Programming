#include<stdio.h>
int main()
{
    int num, r, temp, sum=0, fact;
    printf("Enter any positive number: ");
    scanf("%d", &num);

    temp = num;

    while(temp!=0)
    {
        r = temp % 10;
        fact = 1;
        for(int i = 1; i<=num; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }
    if(sum == num)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not Strong Number");
    }
    return 0;
}
