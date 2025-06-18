#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 0x40;
    UINT iMask2 = 0x4000;
    UINT iMask3 = 0x100000;
    UINT iMask4 = 0x10000000;

    UINT iResult1 = 0, iResult2 = 0, iResult3 = 0, iResult4 = 0;

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;
    iResult3 = iNo & iMask3;
    iResult4 = iNo & iMask4;

    if(iResult1 != 0 && iResult2 != 0 && iResult3 != 0 && iResult4 != 0)
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

    printf("Enter the number: ");
    scanf("%u", &iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("7th, 15th, 21st and 28th bits are ON\n");
    }
    else
    {
        printf("One or more bits are OFF\n");
    }

    return 0;
}
