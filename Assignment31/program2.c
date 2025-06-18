#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(int iNo)
{
    UINT iMask1 = 0x40;
    UINT iMask2 = 0x200;
    UINT iResult = 0;

    iResult = iNo & (iMask1 & iMask2) ;

    if(iResult == (iMask1 & iMask2))
    {
        iNo = iNo & (~iMask1);
        iNo = iNo & (~iMask2);
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