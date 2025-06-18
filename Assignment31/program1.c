#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(int iNo)
{
    UINT iMask = 0x40;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        iNo = iNo & (~iMask);
    }

    return iNo;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter The value");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("%d",iRet);

    return 0;
}