#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iNcnt = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++ , iNcnt++)
    {
            printf("#\t");
            printf("%d\t",iNcnt);
            printf("*\t");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter The Number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
