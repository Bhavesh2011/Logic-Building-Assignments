#include <stdio.h>
#include <string.h>
#include <stddef.h> 

void StrNCpyX(char *src, char *dest, int iCnt) {
    while (iCnt > 0 && *src != '\0') 
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    while (iCnt > 0) 
    {
        *dest = '\0';
        dest++;
        iCnt--;
    }
}

int main() {
    char arr[30];
    char brr[30]; 
    int count;

    printf("Enter string: ");
    if (fgets(arr, sizeof(arr), stdin) != NULL) 
    {
        size_t len = strlen(arr);
        if (len > 0 && arr[len - 1] == '\n') {
            arr[len - 1] = '\0';
        }
    } 
    else 
    {
        arr[0] = '\0';
    }

    printf("Enter number of characters to copy: ");
    scanf("%d", &count);
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    StrNCpyX(arr, brr, count);

    printf("Copied string: %s\n", brr);

    return 0;
}