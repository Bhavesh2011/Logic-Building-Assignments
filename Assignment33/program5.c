#include <stdio.h>
typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0;

    for(int i = iStart; i <= iEnd; i++)
    {
        iMask = iMask | (1 << (i - 1));
    }

    return iNo ^ iMask;
}

int main()
{
    UINT iValue = 897;
    int iStart = 9, iEnd = 13;

    UINT iRet = ToggleBitRange(iValue, iStart, iEnd);
    printf("Output: %u\n", iRet);
    return 0;
}
