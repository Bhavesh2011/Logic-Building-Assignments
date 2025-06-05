#include <stdio.h>
#include <ctype.h>

void displayDigits(char *str) 
{
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (isdigit(str[i])) 
        {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}

int main() 
{
    char arr[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", arr);

    printf("Digits in the string: ");
    displayDigits(arr);

    return 0;
}