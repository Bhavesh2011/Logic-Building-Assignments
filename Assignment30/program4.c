#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask1 = 0x40;
    UINT iMask2 = 0x80;
    UINT iMask3 = 0x100;

    UINT iMask = iMask1 | iMask2 | iMask3;

    if ((iNo & iMask) == iMask)
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
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter The Number : \n");
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