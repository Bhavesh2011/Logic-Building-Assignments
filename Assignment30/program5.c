#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0x1;


    UINT iResult = iNo & iMask; 

    if (iResult == 1)
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