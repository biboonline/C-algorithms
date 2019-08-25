#include <stdio.h>
#include <stdlib.h>
unsigned char Prime_Check(unsigned int n);
int main()
{
    unsigned int x;
    scanf(" %d",&x);
    printf("%d",Prime_Check(x));
    return 0;
}

unsigned char Prime_Check(unsigned int n)
{   unsigned int i, Prime=0;
    if(n<=2)
    {
        Prime = 1;
    }
    else
    {
        for(i=2; i<=(n-1); i++)
        {
            if(n%i == 0)
            {
                Prime = 0;
                break;
            }
        }

        if(i == n)
        {
            Prime = 1;
        }


    }

    return Prime;

}
