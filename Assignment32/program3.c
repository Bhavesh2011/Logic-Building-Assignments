#include <stdio.h>
typedef unsigned int UINT;

UINT OnBit(UINT iNo, int iPos)
{
    UINT iMask = 1;

    if(iPos < 1 || iPos > 32)
    {
        return iNo;
    }

    iMask = iMask << (iPos - 1);

    return iNo | iMask;
}

int main()
{
    UINT iValue = 10;
    int iPos = 3;
    UINT iRet = OnBit(iValue, iPos);

    printf("Output : %u\n", iRet);

    return 0;
}
