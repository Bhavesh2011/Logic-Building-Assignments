#include <stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 1 << (iPos1 - 1);
    UINT iMask2 = 1 << (iPos2 - 1);

    if((iNo & iMask1) || (iNo & iMask2))
        return TRUE;
    else
        return FALSE;
}

int main()
{
    UINT iValue = 10;
    int iPos1 = 3, iPos2 = 7;
    BOOL bRet = ChkBit(iValue, iPos1, iPos2);

    if(bRet)
        printf("Output: TRUE\n");
    else
        printf("Output: FALSE\n");
    return 0;
}
