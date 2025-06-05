#include <stdio.h>

int iCountSmall(char *str)
{
    int iCnt = 0;
    
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
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

    iRet = iCountSmall(arr);

    printf("%d\n",iRet);

    return 0;
}