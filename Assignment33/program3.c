#include <stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x00000900; // 9th = 0x100, 12th = 0x800, total = 0x900

    if((iNo & iMask) != 0)
        return TRUE;
    else
        return FALSE;
}

int main()
{
    UINT iValue = 257;
    BOOL bRet = ChkBit(iValue);
    if(bRet)
        printf("Output: TRUE\n");
    else
        printf("Output: FALSE\n");
    return 0;
}
