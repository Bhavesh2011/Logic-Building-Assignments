#include <stdio.h>


void printASCIITable() 
{
    for (int i = 0; i <= 255; i++) 
    {
        printf("%-10d", i);
        printf("0x%-8X", i);
        printf("0o%-7o", i);

        if (i >= 32 && i <= 126) {
            printf("%-10c\n", (char)i);
        } else {
            if (i == 0) {
                printf("%-10s\n", "[NUL]");
            } else if (i == 7) {
                printf("%-10s\n", "[BEL]");
            } else if (i == 8) {
                printf("%-10s\n", "[BS]");
            } else if (i == 9) {
                printf("%-10s\n", "[HT]");
            } else if (i == 10) {
                printf("%-10s\n", "[LF]");
            } else if (i == 13) {
                printf("%-10s\n", "[CR]");
            } else if (i == 27) {
                printf("%-10s\n", "[ESC]");
            } else if (i == 127) {
                printf("%-10s\n", "[DEL]");
            } else {
                printf("%-10s\n", "[N/A]");
            }
        }
    }
}

int main() 
{
    printASCIITable();
    return 0;
}


