#include <stdio.h>
#include <ctype.h>

void processCharacter() 
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'a' && ch <= 'z') 
    {
        printf("Output: %c\n", (char)(ch - 32));
    } else 
    {
        printf("Output: %c\n", ch);
    }
}

int main() 
{
    processCharacter();
    return 0;
}