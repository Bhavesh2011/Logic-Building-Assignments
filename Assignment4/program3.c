#include<stdio.h>

void NonFactor(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    for(iCnt = 1;iCnt < iNo; iCnt++)
    {
       if((iNo % iCnt) != 0)
       {
        printf("%d\n",iCnt);
       }

    }
}


int main()
{
    int iValue = 0;

    printf("Enter The Number");
    scanf("%d",&iValue);

    NonFactor(iValue);

    return 0;
}