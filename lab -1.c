#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    double a, b;
    while (1)
    {
        printf("Enter an operator(+,-,*,/), if want to to exit press x:");
        scanf("%c", &ch);

        if (ch=='x')
            exit(0);
        printf("Enter two first and second operand:");
        scanf("%lf%lf",&a,&b);
        if(ch=='+')
        {
            printf("%.1lf+%.1lf=%.1lf\n",a,b,a+b);
        }
        else if (ch=='-')
        {
            printf("%.1lf-%.1lf=%.1lf\n",a,b,a-b);
        }
        else if (ch=='*')
        {
            printf("%.1lf*%.1lf=%.1lf",a,b,a*b);
        }
        else if (ch=='/')
        {
            printf("%.1lf/%.1lf=%.1lf\n",a,b,a/b);
        }
        else
        {
            printf("Error!! please write a valid operator\n");
        }
    }
}
