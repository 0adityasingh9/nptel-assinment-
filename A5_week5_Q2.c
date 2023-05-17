#include <stdio.h>
int collatz(int a);
int c = 0;

int main()
{
    int n, c;
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("0");
    }
    else if (n == 1)
    {
        printf("0");
    }
    else
    {
        c = collatz(n);
        printf("%d", c);
    }

    return 0;
}
int collatz(int a)
{
    int n = a;
    if (n % 2 == 0)
    {
        n = n / 2;
        c++;
        if (n != 1)
        {
            collatz(n);
        }
        else
        {
            return c;
        }
    }
    else
    {
        n=(3*n)+1;
        c++;
        if (n!=1)
        {
            collatz(n);
        }
        else
        {
            return c;
        }
        
    }
    
}