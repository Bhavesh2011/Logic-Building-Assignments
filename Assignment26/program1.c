#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isCharPresent(const char *str, char ch) 
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            return true;
        }
    }
    return false;
}

int main()
{
    char arr[20];
    char searchChar = '\0';
    bool result = '\0';

    printf("Enter string: ");
    scanf("%[^\n]s", arr);


    printf("Enter a single character to check: ");
    scanf(" %c", &searchChar);

    result = isCharPresent(arr, searchChar);

    if (result) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    return 0;
}