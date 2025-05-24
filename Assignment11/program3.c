#include<stdio.h>

void Display(int iNo)
{
     int iCnt = 0;
     int iEnd = iNo + 1;

     for(iCnt = 1; iCnt <= iEnd; iCnt++)
     {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
        else
        {
            printf("*\t");
        }
     }
}

int main()
{
    int iValue = 0;
    printf("Enter The Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}