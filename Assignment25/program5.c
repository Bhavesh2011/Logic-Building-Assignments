#include <stdio.h>
#include <ctype.h>

int countWhiteSpaces(char *str) 
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (isspace(str[i])) 
        {
            count++;
        }
    }
    return count;
}

int main() 
{
    char arr[100];
    int whiteSpaceCount;

    printf("Enter a string: ");
    scanf("%[^\n]s", arr);

    whiteSpaceCount = countWhiteSpaces(arr);

    printf("Number of white spaces: %d\n", whiteSpaceCount);

    return 0;
}