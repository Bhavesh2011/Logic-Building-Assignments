#include <stdio.h>
#include <string.h>

void StrRevX(char *str) 
{
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end) 
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    StrRevX(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}