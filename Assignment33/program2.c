#include <stdio.h>
typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    UINT iResult = iNo1 & iNo2;
    int iPos = 1;

    while(iResult != 0)
    {
        if(iResult & 1)
            printf("%d\t", iPos);

        iResult = iResult >> 1;
        iPos++;
    }
    printf("\n");
}

int main()
{
    UINT iNo1 = 10, iNo2 = 15;
    printf("Output: ");
    CommonBits(iNo1, iNo2);
    return 0;
}
