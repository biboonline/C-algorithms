#include <stdio.h>
#include <stdlib.h>

int maximum_xor(int a, int b);
int main()
{
    int a,b;
    scanf(" %d%d",&a,&b);
    printf("\n%d",maximum_xor(a,b));
    return 0;
}

int maximum_xor(int a, int b)
{
    int i,j,Max = 0;
    if(b>a)
    {
        for(i=a;i<b;i++)
        {
            for(j=i;j<=b;j++)
            {
                if(i>j)
                {
                    continue;
                }
                else
                {
                    if((i^j) > Max)
                    {
                        Max = i^j;
                    }
                }
            }
        }

        return Max;
    }
    else
    {
        return 1;
    }
}
