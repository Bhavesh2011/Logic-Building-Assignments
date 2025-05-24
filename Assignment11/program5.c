#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iLow = iNo - 8;
    int iHigh = iNo + 8;

    for(iCnt = 1; iCnt <= iHigh ; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }

    }
    
}

int main()
{
    int iValue = 0;
    printf("Enter The Number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
