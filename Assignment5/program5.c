#include<stdio.h>

void DisplayMultiples(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= (iNo * 5); iCnt++)
    {
        if((iCnt % iNo) == 0)
        {
            printf("%d\n",iCnt);

        }

    }


}

int main()
{
    int iValue = 0;

    printf("Enter The Number : \n");
    scanf("%d",&iValue);

    DisplayMultiples(iValue);

    return 0;
}