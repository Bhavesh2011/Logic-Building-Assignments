#include <stdio.h>
#include <string.h>
#include <ctype.h> // For isupper()

void StrCpyCap(char *src, char *dest) 
{
    while (*src != '\0') {
        if (*src >= 'A' && *src <= 'Z')
        { 
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main() {
    char arr[30]; // Source string
    char brr[30]; // Destination string

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

    StrCpyCap(arr, brr);

    printf("Capital characters copied: %s\n", brr);

    return 0;
}