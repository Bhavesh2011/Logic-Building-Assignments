#include<stdio.h>

void DecreasedFact(int iNo)
{
    int iCnt = 0;
    int iNo1 = iNo - 1;
  

    for(iCnt = iNo1;iCnt > 1; iCnt--)
    {
      
       if((iNo % iCnt) == 0)
       {
        printf("%d\n",iCnt);
       }

    }

  
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Number");
    scanf("%d",&iValue);

    DecreasedFact(iValue);

    return 0;
}