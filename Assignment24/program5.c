#include <stdio.h>

void ReverseString(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while (*end != '\0')
    {
        end++;
    }
    end--; 

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char ch[50];
    printf("Enter The String : ");
    scanf("%[^'\n']s",ch);

    ReverseString(ch);

    printf("Reversed String : %s\n", ch);

    return 0;
}