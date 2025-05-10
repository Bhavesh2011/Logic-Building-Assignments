#include <stdio.h>
#include <ctype.h>

char toLowerCase(char cCh) {
    return tolower(cCh);
}

int main() {
    char cCh = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cCh);  

    char clower = toLowerCase(cCh);

    printf("Lowercase: %c\n", clower);

    return 0;
}
