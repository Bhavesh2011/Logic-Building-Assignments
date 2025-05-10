#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            if((iCnt % 2) == 0)
            {
                printf("%d\n",iCnt);

            }
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter The Number ; \n");
    scanf("%d",&iValue);

    Factorial(iValue);

    return 0;
}