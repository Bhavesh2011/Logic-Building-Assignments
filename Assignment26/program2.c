#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int Count(const char *str, char ch) 
{
    int iCnt = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            iCnt++;
        }
    }

    return iCnt;
    
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

    iresult = Count(arr, searchChar);

    printf("Frequency is : %d",iresult);

    return 0;
}