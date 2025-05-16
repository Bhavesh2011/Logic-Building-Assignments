#include<stdio.h>

int DisplayDiff(int iNo)
{
    int iCnt = 0;
    int iDiff = 0;
    int iEvenMul = 1; 
    int iOddMul = 1;  

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0) 
        {
            if(iCnt % 2 == 0)
            {
                iEvenMul = iEvenMul * iCnt; 
            }
            else
            {
                iOddMul = iOddMul * iCnt;
            }
        }
    }

    iDiff = iEvenMul - iOddMul;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Value : \n");
    scanf("%d", &iValue);

    iRet = DisplayDiff(iValue);

    printf("Difference between product of even and odd factors: %d\n", iRet);

    return 0;
}
