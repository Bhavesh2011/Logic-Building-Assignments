#include <stdio.h>
#include <ctype.h>

void struprx(char *str) 
{
    for (int i = 0; str[i] != '\0'; i++) 
    {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]s", arr);

    struprx(arr);

    printf("Modified string: %s\n", arr);

    return 0;
}