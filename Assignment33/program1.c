#include <stdio.h>
typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        if(iNo & 1)
            iCount++;

        iNo = iNo >> 1;
    }

    return iCount;
}

int main()
{
    UINT iValue = 11;
    int iRet = CountOne(iValue);
    printf("Output: %d\n", iRet);
    return 0;
}
