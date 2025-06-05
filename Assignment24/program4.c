#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;


bool CheckVowel(char *str)
{

    bool bCheck = FALSE;

    while(*str != 0)
    {
    if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
    {
        bCheck = TRUE;
    }
    str++;
    }


    return bCheck;
}

int main()
{
    char ch[50];
    bool bRet = '\0';
    printf("Enter The String : \n");
    scanf("%[^'\n']s", ch);

    bRet = CheckVowel(ch);
    if(bRet == TRUE)
    {
        printf("Present\n");
    }
    else
    {
        printf("Not present");
    }

    return 0;
}