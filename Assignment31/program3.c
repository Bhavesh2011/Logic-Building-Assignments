#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 1;
    iMask = (iMask << 6);
    UINT iResult = 0;
    iResult = iNo ^ iMask;
    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    printf("Enter The number");
    scanf("%d",&iValue);
    iRet = ToggleBit(iValue);

    printf("%d",iRet);

    return 0;
}
