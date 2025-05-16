#include<stdio.h>

void DisplayEVenFact(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    for(iCnt = 1;iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            if((iCnt % 2) == 0)
            {
                printf("%d\n",iCnt);
            }
        }
    }


}

int main()
{
    int iValue = 0;

    printf("Enter The Value : \n");
    scanf("%d",&iValue);

    DisplayEVenFact(iValue);

    return 0;
}