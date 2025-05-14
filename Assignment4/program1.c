#include<stdio.h>

int FactMul(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    for(iCnt = 1;iCnt < iNo; iCnt++)
    {
       if((iNo % iCnt) == 0)
       {
        iMul = iMul * iCnt;
       }

    }

    return iMul;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Number");
    scanf("%d",&iValue);

    iRet = FactMul(iValue);

    printf("The Multiplication is : %d",iRet);

    return 0;
}