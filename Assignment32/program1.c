#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{
    UINT iMask = 1;

    if(iPos < 1 || iPos > 32)
    {
        return FALSE;
    }

    iMask = iMask << (iPos - 1);

    if(iNo & iMask)
        return TRUE;
    else
        return FALSE;
}

int main()
{
    UINT iValue = 10;
    int iPos = 2;
    BOOL bRet = ChkBit(iValue, iPos);

    if(bRet == TRUE)
        printf("Output : TRUE\n");
    else
        printf("Output : FALSE\n");

    return 0;
}
