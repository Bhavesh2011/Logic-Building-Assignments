#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL; 

BOOL CheckChar(char cCh) 
{
    if ((cCh >= 'A' && cCh <= 'Z'))
    {
        return TRUE;
    } else 
    {
        return FALSE;
    }
}

int main() 
{
    char cValue = '\0';
    BOOL bCatch = FALSE;

    printf("Enter the Alphabet : \n");
    scanf("%c", &cValue);

    bCatch = CheckChar(cValue);

    if (bCatch == TRUE) {
        printf("Alphabet is present\n");
    } else {
        printf("Not present\n");
    }

    return 0;
}