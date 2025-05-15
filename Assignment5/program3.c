#include<stdio.h>

void DisplayNumbers(int iNo)
{
   int iCnt = 0;
   int iNeg = 0; 
   for(iCnt = iNo;iCnt >= 0;iCnt--)
   {
    iNeg = -iCnt;
    printf("%d\n",iNeg);
   }
   for(iCnt = 1;iCnt <= iNo;iCnt++)
   {
    printf("%d\n",iCnt);
   }

}


int main()
{
    int iValue = 0;

    printf("Enter The Number : \n");
    scanf("%d",&iValue);

    DisplayNumbers(iValue);

    return 0;
}