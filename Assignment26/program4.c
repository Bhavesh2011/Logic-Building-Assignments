#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int Index(const char *str, char ch) 
{

    int i = 0;
    int iNo = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            iNo = i;
        }
    }

    return i;
    
}

int main()
{
    char arr[20];
    char searchChar = '\0';
    int iresult = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", arr);


    printf("Enter a single character to check: ");
    scanf(" %c", &searchChar);

    iresult = Index(arr, searchChar);

    printf("Frequency is : %d",iresult);

    return 0;
}