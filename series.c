//1+2+3+.........+n
#include<stdio.h>
int main()
{
    int n, i, sum=0;
    printf("Enter the last number: ");
    scanf("%d", &n);
    printf("1 + 2 + 3 +.......+%d\n", n);
    for(i =1; i<=n; i=i+1)
    {
        sum = sum + i;
    }
    printf("Sum of the series is: %d\n", sum);
    return 0;
}
