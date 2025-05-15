#include<stdio.h>

void DisplayNumbers(int iNo)
{
   int iCnt = 0;

   for(iCnt = 1;iCnt <= iNo;iCnt++)
   {
    printf("%d\n",iCnt);
   }

}


int main()
{
    int iValue = 0;

    printf("Enter The Number");
    scanf("%d",&iValue);

    DisplayNumbers(iValue);

    return 0;
}