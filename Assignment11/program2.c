#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 0; iCnt--)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }
        else
        {
            printf("#\t");
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter The Input : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}