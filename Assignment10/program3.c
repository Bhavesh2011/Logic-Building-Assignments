#include <stdio.h>

int CountBetween3and5(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)  
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit > 3) && (iDigit < 5)) 
        {
            iCnt++;
        }

        iNo = iNo / 10; 
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d", &iValue);

    iRet = CountBetween3and5(iValue);

    printf("Number of digits between 3 and 5: %d\n", iRet);

    return 0;
}
