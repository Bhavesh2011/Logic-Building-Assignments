#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0


BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 0x10;     
    UINT iMask2 = 0x20000;  
    UINT iResult1 = 0, iResult2 = 0;

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    if(iResult1 != 0 && iResult2 != 0)
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
        printf("Both 5th and 18th bits are ON\n");
    }
    else
    {
        printf("Either 5th or 18th bit is OFF\n");
    }

    return 0;
}
