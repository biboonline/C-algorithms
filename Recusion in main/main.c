#include <stdio.h>
#include <stdlib.h>
#define seconds (60)*(60)*(365)*(24)
#define Mul(a,b) (a)*(a)*(a) + (b)*(b)

void Add();

int main()
{
    /** question 1 **/
   /* static int i=5;
    if(i--)
    {
        main();
        printf("\n%d",i);
    }
    */

    /** question 2 **/
/*
    int x = 1, y = 3;

    //printf("%d",Mul(++x,++y));

    switch(x)
    {

    default:
        printf("\ndefo");
    case 1:
        printf("\none");
    case 2:

        printf("\ntwo");
        break;
    }
*/

    /** question 3 **/
    //add();


     /** question 4 **/
   /*  int arr[5];
     arr++;
     *(arr+1) = 5;
     printf("%d", arr[2]);
     */
     volatile const int * P;
    return 0;
}

