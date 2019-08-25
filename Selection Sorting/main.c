#include <stdio.h>
#include <stdlib.h>
void selectionSorting(int *arr, const int size);
int main()
{   int i = 0;
    int arr[6] = {55,3,66,8,5,12};
    for(i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    selectionSorting(arr,6);
    for(i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

void selectionSorting(int *arr, const int size)
{
    unsigned int i,j,SortedIndex=0;
    int MinIndex = 0,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=SortedIndex;j<size;j++)
        {
            if(arr[j] < arr[MinIndex])
            {
                MinIndex = j;
            }
        }
        temp = arr[SortedIndex];
        arr[SortedIndex] = arr[MinIndex];
        arr[MinIndex] = temp;
        SortedIndex++;

    }

}
