#include<stdio.h>

void Numbers(int iNo)
{
   if(iNo <= 50)
   {
    printf("small");
   }
   else if ((iNo > 50) && (iNo <= 100))
   {
    printf("Medium");

   }
   else
   {
    printf("Large");
   }
   

}


int main()
{
    int iValue = 0;

    printf("Enter The Number : \n");
    scanf("%d",&iValue);

    Numbers(iValue);

    return 0;
}