#include <stdio.h>

int find_factorial(int k)
{
    if (k == 1 || k == 0)
    {
        return 1;
    }
    else
    {
        return (k * find_factorial(k - 1));
    }
}

int main()
{
    int n,k;
    printf("Enter the number\n");
    scanf("%d", &n);
    for (int i = 1; i < n+1; i++)
    {
        scanf("%d",&k);
        printf(" %d", find_factorial(k));
    }
    
    return 0;
}
