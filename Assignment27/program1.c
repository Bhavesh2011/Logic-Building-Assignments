#include <stdio.h>
#include <string.h>

void StrCpyX(char *src, char *dest) {
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0'; 
}

int main() {
    char arr[30] = "Marvellous Multi OS"; 
    char brr[30];  

    StrCpyX(arr, brr);

    printf("Original string: %s\n", arr);
    printf("Copied string: %s\n", brr);

    return 0;
}