#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void PredictConcealed(unsigned int LowerBoumdary,unsigned int UpperBoumdary);
int main()
{
    unsigned int x, y;
    scanf("%d",&x);
    scanf(" %d",&y);

    if(x<y)
    {
    PredictConcealed(x,y);
    }

    return 0;
}

void PredictConcealed(unsigned int LowerBoumdary,unsigned int UpperBoumdary)
{
    char input;
    unsigned int PredictedNumber = (LowerBoumdary + UpperBoumdary)/2;
    printf("%d\n",PredictedNumber);

    //scanf("%c%*c",&input);
    scanf(" %c",&input);
    while(input == '>' ||input == '<')
    {
        switch(input)
        {
        case '>':
            PredictedNumber = (PredictedNumber + UpperBoumdary)/2;
            printf("%d\n",PredictedNumber);

            scanf(" %c",input);
            break;

        case '<':
            PredictedNumber = (PredictedNumber + LowerBoumdary)/2;
            printf("%d\n",PredictedNumber);

            scanf(" %c",input);
            break;

        default:
            break;
        }

    }
    if(input == '=')
    {
        printf("\nPredict Correctly");
    }
}
