#include <stdio.h>
int fib(int);
int main()
{
    int num;
    int res;
 
    printf("Enter the nth number in fibonacci series: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Fibonacci of negative number is not possible.\n");
    }
    else
    {
        res = fib(num);
        printf("The %d number in fibonacci series is %d\n", num, res);
    }
    return 0;
}

int fib(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return(fib(num - 1) + fib(num - 2));
    }
}
