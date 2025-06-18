#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask1 = 1 << 6;   
    UINT iMask2 = 1 << 9;   

    UINT iCombinedMask = iMask1 | iMask2;

    UINT iResult = iNo ^ iCombinedMask;  

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
