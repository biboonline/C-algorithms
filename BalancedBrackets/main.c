/*
 A text editor is implemented in such a way to check for brackets balance.

Input Format: Input contains one string which consists of big and small latin letters, digits, punctuation
marks and brackets from the set []{}().

Output Format: If the code in uses brackets correctly, output "Balanced" (without the quotes). Otherwise,
output "UnBalanced sequence" with the 1-based index of the first unmatched closing bracket, and if there
are no unmatched closing brackets, output the 1-based index of the first unmatched opening bracket.
if the entered text is not brackets it outputs "the element number id unsupported"
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void Balanced_brackets(); //outputs the result of parsing the input text.
int main()
{   puts("Enter the text to be scanned !");
     Balanced_brackets();
    return 0;
}

void Balanced_brackets(){
char S[2000]; //S=input text , Data=Text after parsing.
int count1=0,count2=0,count3=0,i=0;        //itrators
int FirstOpenedBracketIndex;
bool flag=true;
gets(S);
for(i=0;S[i]!='\0';i++){
switch (S[i]){
 case '(':
    count1++;
    break;
 case '{':
    count2++;
    break;
 case '[':
    count3++;
    break;
 case ')':
    count1--;
    break;
 case '}':
    count2-- ;
    break;
 case ']':
    count3--;
    break;
   default :
       printf("\n element %d is unsupported text",i);
       flag=false;
}

if(count1<0 || count2<0 || count3<0){
    printf("\n%d\n",i);
    puts("Unbalanced sequence !");
    return 0;
}
if(count1==1 || count2 == 1 || count3 == 1){
    FirstOpenedBracketIndex= i;
}
}
if(count1==0&&count2==0&&count3==0&&flag==true){
        puts("Balanced");
}else if(flag==true){
puts("Unbalanced sequence !");
printf("%d",FirstOpenedBracketIndex);
}
}
