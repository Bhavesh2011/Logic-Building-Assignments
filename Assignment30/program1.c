#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x4000;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult != 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter The Number");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == 1)
    {
        printf("On");
    }
    else
    {
        printf("off");
    }

    return 0;
}