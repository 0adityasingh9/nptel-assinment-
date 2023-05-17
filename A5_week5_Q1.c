#include<stdio.h>
void revstring()
{
    int a = getchar();
    if (a == EOF)
    {
        return;
    }
    revstring();
    putchar(a);
    

}
int main()
{
    revstring();
    return 0;
}
