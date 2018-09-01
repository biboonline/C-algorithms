#include <stdio.h>
#include <stdlib.h>
#include <conio.h> /*to use getch()*/
#include <ctype.h>
  int arraySort(int (*fPtr)(int ,int ),int b,int a);/*function declaration : a=array , b=array size ,*fPtr=function pointer*/

    char order;/*the user's desired order will be saved here*/
     int bubble (int size,int arr[size]);/*bubble sort function : arr=array parameter ,size=array size*/
    int selection (int size,int arr[size]);/*selection sort function arr=array parameter ,size=array size */
    int merging (int size,int arr[size]);/*merge sort function arr=array parameter ,size=array size*/
    /*built in merging functions (ascending)*/
     void merge(int arr[], int l, int m, int r);
    void mergeSort(int arr[], int l, int r);
    /*built in merging functions (descending)*/
    void merge2(int arr[], int l, int m, int r);
    void mergeSort2(int arr[], int l, int r);


    /*********************************************main******************************************************/
int main()
{

        char key ='b';/*randomization*/
        int check =1;
    int arr1[99]; /*input array*/

     unsigned int arr1size;/*array size*/
     int i=0;/*counter*/
    char algorithm;/*chosen algorithm will be saved here*/

    printf("This is a program to sort an array using 3 different methods\n");/*prompt*/
    printf("please enter the array to be sorted\n \t press escape when finished (on a seperate line) \nMax number of elements is 99 \n");/*prompt*/
    /*receiving the  input array*/
    do{
        scanf("%d",&arr1[i]);

         i++;
    }
     while((key=getch())!= 27);/*27 = ASCI code for escape key*/
     /*assigning array size*/
     arr1size=i-1;
     int arr2[arr1size];/*another array with adjusted size*/
     /*checking for input errors*/


     /*assigning new array values*/
     for(i=0;i<=arr1size;i++){
        arr2[i]=arr1[i];
     }/*end for*/
     /*testing  valid input*/
     printf("the array entered :\n");
     for(i=0;i<=arr1size;i++){ /*printing entered array*/
        printf("%d  ",arr2[i]);
     }/*end for*/
        /*receiving the desired order*/
        while(check){
        printf("\nenter \"a\" for ascending order , \"d\" for descending order");
        order=getch();
        /*check input*/
        if(order=='d'){
                printf("\n\ndescending order selected\n\n");
                check=0;
                  }else if(order=='a'){
                printf("\n\nascending order selected \n\n");
                check=0;
        }}

        /*receiving the chosen algorithm*/
        while(!check){/*wether to end the input  loop or not */
        printf("enter \"b\" for bubble sort , \"s\" for selection sort , \"m\" for merge sort \n");
        algorithm=getch();

   switch (algorithm) {
    case's':
         arraySort(selection,arr1size+1,arr2);
         check=1;/* to end the loop */
         break;
    case'b':
        arraySort(bubble,arr1size,arr2);
        check=1;
        break;
    case'm':
        arraySort(merging,arr1size+1,arr2);
        check=1;
        break;
    default:
        printf("\n\tinvalid input\n");
        break;

   }/*end switch*/
        }/*end while*/
   /*printing sorted array*/
   for(i=0;i<=arr1size;i++){
    printf("%d  ",arr2[i]);
   }
   printf("\n\n");

    return 0;
}
/*******************************************end main********************************************************/

/********************************************bubble sort*******************************************************/
 int bubble (int size,int arr[size]){
     int i=0 , j=0; /*local counters*/
     int temp;/*temporary variable to be used in swapping places*/
     printf("\nbubble sorting selected\n");/*prompt*/
     if(order=='a'){
     for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }/*end nested for*/
     }/*end for*/
     }/*end if*/
     else{
         for(i=0;i<size;i++){
        for(j=0;j<size;j++){
                if(arr[j]<arr[j+1]){
                    temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }/*end if*/
        }/*end nested for*/
        }/*end for*/
     }/*end else*/
        printf("\n\n");
        /*printing output*/
  return 0;  }/*bubble end*/
/*********************************************selection sort******************************************************/
      int selection (int size,int arr[size]){
           int c=0 , d=0; /*local counters*/
           int temp;/*temporary variable to be used in swapping process*/
           int min_index;/*minimum element location*/
           int max_index;/*maximum element location*/
           printf("\nselection sorting selected\n");/*prompt*/
           if(order=='a'){
             for (c=0;c<(size-1);c++)
   {
      min_index = c;

      for (d=c+1;d<size;d++)
      {
         if(arr[min_index]>arr[d])
            min_index = d;
      }/*end nested for*/
      if ( min_index != c )
      {
         temp = arr[c];
         arr[c] = arr[min_index];
         arr[min_index] = temp;
      }/*end nested if*/
   }/*end if*/

              }/*end if*/
            else{    for (c=0;c<(size-1);c++)
   {
      max_index = c;

      for (d=c+1;d<size;d++)
      {
         if(arr[max_index]<arr[d])
            max_index = d;
      }/*end nested for*/
      if ( max_index != c )
      {
         temp = arr[c];
         arr[c] = arr[max_index];
         arr[max_index] = temp;
      }/*end nested if*/
   }/*end if*/
}/*end else*/

   return 0; }/*selection function end*/

/***************************************************merging sort************************************************/
       int merging (int size,int arr[size]){
            printf("\n\nmerge sorting selected\n\n");/*prompt*/
                if(order=='a'){

mergeSort(arr,0, size - 1);/*function call*/

                }/*end if*/
else{
mergeSort2(arr,0,size - 1);/*function call*/
}

     return 0;      }/*merge  function end*/

 int arraySort(int (*fPtr)(int ,int ) ,int b,int a){
    return (*fPtr)(b,a);
    }/*array sort end*/


/**************************merging sort built in func1 (ascending)*******************************/

          void merge(int arr[], int l, int m, int r)/*l =left element(first) , m=new array size(when dividing) ,r=most right element(last)*/
{
    int i, j, k;/*to determine array indexes*/
    /*asigning array sizes*/
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* copying data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        {L[i] = arr[l + i];}
    for (j = 0; j < n2; j++)
        {R[j] = arr[m + 1+ j];}


    i = 0; /* Initial index of first subarray*/
    j = 0;/* Initial index of second subarray*/
    k = l; /* Initial index of merged subarray*/

    while (i<n1&&j<n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];/*assigning right order in the main array*/
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* copy the remaining elements of L[], if there any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}


/**************************merging sort built in func2 (ascending)*******************************/
           void mergeSort(int arr[], int l, int r)/*for dividing bigger arrays to smaller ones ,l= first element index , r =last element index */
           {
    if (l < r)
    {

        int m = (l+r)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);/*m = last element in the first sub-array */
        mergeSort(arr, m+1, r);/*r = last element in the second sub-array */

        merge(arr, l, m, r);/*call the other function(1st on in merging)*/
    }
}

/**************************merging sort built in func1 (descending)*******************************/
 void merge2(int arr[], int l, int m, int r)/*l = most left element(first) , m=new array size(when dividing) ,r=most right element(last)*/
{
    int i, j, k;/*to determine array indexes*/
    /*asigning array sizes*/
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* copying data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        {L[i] = arr[l + i];}
    for (j = 0; j < n2; j++)
        {R[j] = arr[m + 1+ j];}

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray

    while (i<n1&&j<n2)
    {
        if (L[i] >= R[j])
        {
            arr[k] = L[i];/*assigning right order in the main array*/
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* copy the remaining elements of L[], if there any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}





/**************************merging sort built in func2 (descending)*******************************/
    void mergeSort2(int arr[], int l, int r)/*for dividing bigger arrays to smaller ones*/
           {
    if (l < r)
    {

        int m = (l+r)/2;

        // Sort first and second halves
        mergeSort2(arr, l, m);
        mergeSort2(arr, m+1, r);

        merge2(arr, l, m, r);/*call the other function(1st on in merging)*/
    }
}
