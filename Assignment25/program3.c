#include <stdio.h>
#include <ctype.h>

void strtogglex(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) 
        {
            str[i] = tolower(str[i]);
        } 
        else if (islower(str[i])) 
        {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    strtogglex(arr);

    printf("Modified string: %s\n", arr);

    return 0;
}