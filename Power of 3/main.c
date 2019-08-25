#include <stdio.h>
#include <stdlib.h>
int DivBy3(unsigned int n);
int main()
{   int x;
    scanf("%d", &x);

    printf("%d",DivBy3(x));
    return 0;
}

int DivBy3(unsigned int n)
{
    int retVar = 1;
    unsigned int count = 1;
    if(n == 0)
    {
        retVar = 1;
    }
    else if(n == 1)
    {
        retVar = 0;
    }
    else
    {
       /* while(count*3 < 65536)
        {
            if(count != n)
            {
                count*=3;
            }
            else
            {
                retVar = 0;
                break;
            }
        }
        */

        while(n>0)
        {

            if(n == 3)
            {
                retVar = 0;
                break;
            }
            n/=3;
        }
    }

 return retVar;
}
