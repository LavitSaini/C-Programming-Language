#include <stdio.h>

int fib(int n);

int main()
{
    int n;
    printf("Enter the term of fibonacci you wants to print: \n");
    scanf("%d", &n);

    printf("%d", fib(n));
    return 0;
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if(n == 1){
        return 1;
    }

    return fib(n-1) + fib(n-2);
    
}