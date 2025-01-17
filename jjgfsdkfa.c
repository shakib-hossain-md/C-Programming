
#include <stdio.h>

// Function to calculate factorial
long long calculateFactorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * calculateFactorial(n - 1);
    }
}

int main()
{
    int num;
    long long factorial;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        factorial = calculateFactorial(num);
        printf("Factorial of %d = %lld\n", num, factorial);
    }

    return 0;
}
