#include <stdio.h>

void displayASCIIValues(char ch) 
{

    printf("ASCII Value of '%c':\n", ch);
    printf("  Decimal:      %d\n", ch);
    printf("  Octal:        %o\n", ch);
    printf("  Hexadecimal:  %X\n", ch);
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    displayASCIIValues(ch);

    return 0;
}