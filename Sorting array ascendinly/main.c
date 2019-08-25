#include <stdio.h>
#include <stdlib.h>
#define ArrSize 5

void SortArray(int x);

int SortedArray[ArrSize];
unsigned int Count = 0;

int main()
{   int Input,i;
    for(i=0; i<ArrSize; i++)
    {
    scanf(" %d",&Input);
    SortArray(Input);
    Count++;
    }

    for(i=0; i<ArrSize; i++)
    {
        printf("%d ",SortedArray[i]);
    }

    return 0;
}

void SortArray(int x)
{
        if(x < SortedArray[Count])
        {
            SortedArray[Count+1] = SortedArray[Count];
            SortedArray[Count] = x;
        }
        else
        {
        SortedArray[Count] = x;
        }
    if(Count == ArrSize)
    {

    }

}
