#include <stdio.h>
#include <stdlib.h>


void DisplaySchedue(char cCh) 
{
    if (cCh == 'A') 
    {
        printf("Your Exam at 7AM");
    } 
    else if(cCh == 'B') 
    {
        printf("Your Exam at 8.30AM");
    }
    else if(cCh == 'c') 
    {
        printf("Your Exam at 9.20AM");
    }
    else if(cCh == 'D') 
    {
        printf("Your Exam at 10.30AM");
    }
    else
    {
        printf("Division invalid");
    }

}

int main() 
{
    char cValue = '\0';

    printf("Enter the Division : \n");
    scanf("%c", &cValue);

    DisplaySchedue(cValue);

   
    return 0;
}