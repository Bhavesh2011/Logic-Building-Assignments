#include <stdio.h>
#include <ctype.h>

void strlwrx(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) 
    {
        str[i] = tolower(str[i]);
    }
}

int main() 
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    strlwrx(arr);

    printf("Modified string: %s\n", arr);

    return 0;
}