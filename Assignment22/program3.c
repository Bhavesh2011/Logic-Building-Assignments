#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

BOOL CheckNumb(int iNo) 
{
    if ((iNo >= 0 && iNo <= 9))
    {
        return TRUE;
    } else 
    {
        return FALSE;
    }
}

int main() 
{
    int iValue = '\0';
    BOOL bCatch = FALSE;

    printf("Enter the Nuber : \n");
    scanf("%d", &iValue);

    bCatch = CheckNumb(iValue);

    if (bCatch == TRUE) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}