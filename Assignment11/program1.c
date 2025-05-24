#include<stdio.h>

void Display(int iRow)
{
   int iCnt = 0;
    char Cch = 'A';

    for(iCnt = 1; iCnt <= iRow ; iCnt++ , Cch++)
    {
        printf("%c\t",Cch);
    }
 
}

int main()
{
    int iValue1 = 0;
 

    printf("Enter The Rows : ");
    scanf("%d",&iValue1);


    Display(iValue1);

    return 0;
}