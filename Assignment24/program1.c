#include <stdio.h>

int iCounCapital(char *str)
{
    int iCnt = 0;
    
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    iRet = iCounCapital(arr);

    printf("%d\n",iRet);

    return 0;
}