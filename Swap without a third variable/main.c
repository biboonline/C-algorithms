#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b);

int main()
{
        int x = -5515, y =65536;
        swap(&x,&y);
        printf("x=%d, y=%d", x,y);
    return 0;
}
void swap(int *a,int *b)
{
 *a = *a + *b;
 *b = *a - *b;
 *a = *a - *b;
}
