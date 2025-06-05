#include <stdio.h>
#include <string.h>
#include <ctype.h>

void StrCpySmall(char *src, char *dest) 
{
    while (*src != '\0') {
        if (*src >= 'a' && *src <= 'z') 
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main() {
    char arr[30];
    char brr[30];

    printf("Enter string: ");
    if (fgets(arr, sizeof(arr), stdin) != NULL) 
    {
        size_t len = strlen(arr);
        if (len > 0 && arr[len - 1] == '\n') 
        {
            arr[len - 1] = '\0';
        }
    } 
    else 
    {
        arr[0] = '\0';
    }

    StrCpySmall(arr, brr);

    printf("Small characters copied: %s\n", brr);

    return 0;
}