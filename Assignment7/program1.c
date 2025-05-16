#include<stdio.h>

void Display(int iNo)
{
    int iCnt1 = 0;
    int iCnt2 = 0;

    for(iCnt1 = 1;iCnt1 <= iNo ; iCnt1++)
    {
        printf(" * ");
    }

    for(iCnt2 = 1;iCnt2 <= iNo ; iCnt2++)
    {
        printf(" # ");
    }


}

int main()
{
    int iValue = 0;

    printf("Enter The Value : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}