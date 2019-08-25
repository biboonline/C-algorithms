#include <stdio.h>
#include <stdlib.h>

unsigned int mirror(unsigned int x);
unsigned int mirror2(unsigned int x);

int main()
{
    int x;
    scanf("%d",&x);

    printf("\n%d", mirror(x));
    printf("\n%d", mirror2(x));

    return 0;
}

unsigned int mirror(unsigned x)
{
    unsigned char temp, LowerNibble=0, HigherNibble=0, i,j;
    unsigned int Mirrored = 0;
    temp = x;
    for(i=7,j=0 ; i>=1,j<=3 ; i-=2,j++)
    {
      temp = (x & (1<<j)) << i;
      HigherNibble |= temp;

        //printf(" %d-%d ",j,i);
    }

    for(i=1,j=4 ; i<=7,j<=7 ; i+=2,j++)
    {
      temp = (x & (1<<j)) >> i;
      LowerNibble |= temp;

        //printf(" %d-%d ",j,i);
    }

    /*printf("%x",HigherNibble);
    printf("\n%x",LowerNibble);*/

    Mirrored = HigherNibble | LowerNibble;
    return Mirrored;

}


unsigned int mirror2(unsigned int x)
{
     unsigned char temp=0, i;
     unsigned int Mirrored = 0, Size = sizeof(x) * 4;
     for(i=0;i<Size;i++)
     {
        if((x>>i) == 1)
        {
         Mirrored |= (1 << ((Size - 1) - i));

        }
     }
     return Mirrored;
}
