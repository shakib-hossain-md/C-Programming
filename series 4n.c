///1 2 3 .........n
///1 3 5 .......n
///2 4 6........n
#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter n= ");
    scanf("%d", &n);

    for(i=1; i<=n; i=i+2)
    {
        printf("%d ", i);
    }
    return 0;
}
