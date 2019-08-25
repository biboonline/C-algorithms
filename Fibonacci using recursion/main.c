#include <stdio.h>
#include <stdlib.h>
void Fibonacci(int n);


int main()
{
        Fibonacci(9);
    return 0;
}
void Fibonacci(int n)
{

    static int Var1 = 0, Var2 = 1;

    printf("%d ",Var1 + Var2);

    if((n % 2) == 0)
    {
        Var1 = Var1 + Var2;
    }
    else
    {
        Var2 = Var1 + Var2;
    }

    if(n != 0)
    {
        Fibonacci(--n);
    }
    else
    {
        return;
    }

}
