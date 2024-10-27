#include<stdio.h>
int main()
{
    int i, j, num, temp,r, sum=0;
    printf("Enter any positive number: ");
    scanf("%d", &num);

    temp = num;

    while(temp!=0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }
    if(num == sum)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}
