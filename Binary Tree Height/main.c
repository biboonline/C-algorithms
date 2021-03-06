/*
Input Format: The first line contains the number of nodes" n" The second line contains integer numbers
from −1 to n−1 — parents of nodes. If the nth one of them (0 ≤ n≤ n− 1) is −1, node n is the root,
otherwise it’s 0-based index of the parent of nth node. It is guaranteed that there is exactly one root.
It is guaranteed that the input represents a tree.

Output Format: Output the height of the tree.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int count1=0,height=0; //count1 is used to count during recursion.
int TreeHeight(int n,int nodes[]);//get the inputs
int Calculate(int rootindex,int nodes[],int n);
int main()
{   int n; //number of nodes
    puts("enter the number of nodes :");
    scanf("%d",&n);
    int nodes[n];   //tree elements
    TreeHeight(n,nodes);
    return 0;
}
int TreeHeight(int n,int nodes[]){
    int RootValue,i=0,j=0;
    puts("enter the nodes :");
for (i=0;i<n;i++){
  scanf("%d",&nodes[i]); //getting root elements from the user.
}
i=0;
//check for root presence in the input format.
while(nodes[i]!=-1){
    i++;
    if(i>=n){
        printf("Invalid format");
            return 0;
    }
}
//determine the root
for(j=0;j<n;j++){
 if(nodes[j]==-1){
    RootValue=j;    //root value is the index where the "-1" is located.
    count1++;
    Calculate(RootValue,nodes,n); //Check each branch till the end to get max height.
        }
}
printf("\n%d",height+1);
}

int Calculate(int rootindex,int nodes[],int n){
    int Child,i;
    bool ChildFound=false; //flag to determine whether the current parent has children or not.
    for(i=0;i<n;i++){
        if(rootindex==nodes[i]){
            Child=i;
            count1++;
            ChildFound=true;
            Calculate(Child,nodes,n); //calculate height recursively.
        }
    }

    if(ChildFound==false){
            count1--;// if there is no child found, Count1 was must be decremented
                     // so that the program returns to the previous count and finds
                    // another child.
    }
    if(count1>height){
        height=count1; //save the max tree height found.
    }
 }
