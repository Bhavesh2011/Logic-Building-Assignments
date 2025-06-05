#include<stdio.h>

void Display(char ch)
{
    char Cch = 0;
    if((ch >= 'a') && (ch <= 'z'))
    {
        for(Cch = ch; Cch >= 'a'; Cch--)
        {
            printf("%c\n",Cch);
        }
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        for(Cch = ch; Cch <= 'Z'; Cch++)
        {
            printf("%c\n",Cch);
        }
    }
    else
    {
        printf("Please enter an alphabetic character. Input was: %c\n", ch);
    }
}

int main()
{
    char cCh = '\0';
    printf("Enter The Letter :");
    scanf("%c",&cCh);

    Display(cCh);

    return 0;
}