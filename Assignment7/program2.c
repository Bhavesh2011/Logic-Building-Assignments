#include<stdio.h>

int InrToDollar(int iNo)
{
   int iDollar = 0;
   iDollar = iNo * 70;

   return iDollar;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Value of INR : \n");
    scanf("%d",&iValue);

    iRet = InrToDollar(iValue);

    printf("%d",iRet);

    return 0;
}