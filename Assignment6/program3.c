#include<stdio.h>

int DisplayFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    
    for(iCnt = 1;iCnt <=iNo ; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;

}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Number : \n");
    scanf("%d",&iValue);

    iRet = DisplayFactorial(iValue);

    printf("The Factorial is : %d",iRet);

    return 0;
}