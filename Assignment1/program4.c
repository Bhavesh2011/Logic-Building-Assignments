#include <stdio.h>

#define TRUE 1
#define FALSE -1

int Check(int iNo)
{
    if ((iNo % 5) == 0)
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
    printf("Enter The Value:\n");
    scanf("%d", &iValue);

    int iRet = Check(iValue);  

    if(iRet == 1)
    {
        printf("Divisible By 5");
    }
    else
    {
        printf("Not Divible by 5");
    }
     return 0;
}
