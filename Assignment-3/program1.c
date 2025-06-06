#include<stdio.h>

int PrintEven(int iNo)
{
    int iNo2 = iNo * 2;
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo2 ; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number that How much even number You need : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}