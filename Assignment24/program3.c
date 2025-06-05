#include <stdio.h>

int CheckDiff(char *str)
{
    int iCnt = 0;
    int iCnt1 = 0;
    int iDiff = 0;
    
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        if (*str >= 'A' && *str <= 'Z')
        {
            iCnt1++;
        }

        str++;
    }

    iDiff = iCnt - iCnt1;
    return iDiff;
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    iRet = CheckDiff(arr);

    printf("%d\n",iRet);

    return 0;
}