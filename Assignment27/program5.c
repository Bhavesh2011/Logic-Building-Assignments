#include <stdio.h>
#include <string.h>
#include <stddef.h>

void StrCatX(char *src, char *dest) 
{
    while (*src != '\0') 
    {
        src++;
    }

    while (*dest != '\0') 
    {
        *src = *dest;
        src++;
        dest++;
    }
    *src = '\0';
}

int main() 
{
    char str1[50]; 
    char str2[30]; 

    printf("Enter first string: ");
    if (fgets(str1, sizeof(str1), stdin) != NULL) 
    {
        size_t len = strlen(str1);
        if (len > 0 && str1[len - 1] == '\n') 
        {
            str1[len - 1] = '\0';
        }
    } 
    else 
    {
        str1[0] = '\0';
    }

    printf("Enter second string to concatenate: ");
    if (fgets(str2, sizeof(str2), stdin) != NULL) 
    {
        size_t len = strlen(str2);
        if (len > 0 && str2[len - 1] == '\n') {
            str2[len - 1] = '\0';
        }
    } 
    else 
    {
        str2[0] = '\0';
    }

    StrCatX(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}