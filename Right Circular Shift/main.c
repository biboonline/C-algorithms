#include <stdio.h>
#include <stdlib.h>

unsigned char u8RightCircShift(unsigned int Input, int Numofshifts, unsigned int *Output);
int main()
{
    unsigned int Out;
    u8RightCircShift(4,2,&Out);
    return 0;
}
unsigned char u8RightCircShift(unsigned int Input, int Numofshifts, unsigned int *Output)
{
    unsigned int temp, i;
    if(Numofshifts > 32)
    {
        *Output = Input;
        printf("\n Number of shifts exceeds 32");
        return 0xff;
    }
    else
    {
        /*
        *Output = Input;
        for(i=0;i<Numofshifts;i++)
        {
            temp = Input & (1 << i);
            temp <<=31;
            *Output >>= 1;
            *Output |= temp;
        }*/

        *Output = (Input>>Numofshifts) | (Input << (8*sizeof(unsigned int) - Numofshifts));

        printf("\n%x",*Output);
        return 0;
    }
}
