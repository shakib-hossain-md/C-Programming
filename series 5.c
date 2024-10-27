///1 2 3 .........n
///1 3 5 .......n
///2 4 6........n
#include<stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter n= ");
    scanf("%d", &n);

    for(i=2; i<=n; i=i+2)
    {
        printf("%d ", i);
        sum = sum + i;
    }
    printf("\nThe sum of the numbers is: %d\n", sum);
    return 0;
}
