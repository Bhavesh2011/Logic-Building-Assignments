#include <stdio.h>

void checkSpecialSymbol(char ch) 
{

    if (ch == '!' || ch == '@' || ch == '#' || ch == '$' ||
        ch == '%' || ch == '^' || ch == '&' || ch == '*')
    {
        printf("The character '%c' IS a special symbol.\n", ch);
    }
    else
    {
        printf("The character '%c' is NOT a special symbol.\n", ch);
    }
}

int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    checkSpecialSymbol(ch);

    return 0;
}