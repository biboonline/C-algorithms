#include <stdio.h>
#include <stdlib.h>
int *swap(unsigned int sizeA,int* A,unsigned int sizeB,int* B);
int main()
{
    unsigned int i;
    int a[] = {1,5,8,9}, b[]= {11,66,99},*c;
    c = swap(4,a,3,b);
    for(i=0;i<4;i++)
    {
        printf(" %d ",*(c + i));
    }

    return 0;
}


int *swap(unsigned int sizeA,int* A,unsigned int sizeB,int* B)
{
    unsigned int defaultSize,i;
    int temp;
    if(sizeA >= sizeB)
    {
        defaultSize = sizeB;
    }
    else
    {
        defaultSize = sizeA;
    }
    for(i=0;i<defaultSize;i++)
    {
       temp = A[i];
       A[i] = B[i];
       B[i] = temp;
    }
    return A;
}
