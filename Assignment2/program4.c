#include<stdio.h>

void Display(int iNo1 , int iNo2)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt <= iNo2;iCnt++)
    {
        printf("%d\n ",iNo1);
    }
}

int main()
{
    int iValue = 0;
    int iCnt = 0;

    printf("Enter The Number for iteretion : ");
    scanf("%d",&iCnt);

     printf("Enter The Value which you want to iterate : ");
    scanf("%d",&iValue);

    Display(iValue , iCnt);

    return 0;

}