#include<stdio.h>

int DiffSum(int iNo)
{
    int iNo1 = 0;
    int iSum = 0;
    int iDiff = 0;
    int iDiffrence = 0;

    while(iNo != 0)
    {
        iNo1 = iNo % 10;
       if((iNo1 % 2) == 0)
       {
        iSum = iSum + iNo1;
       }
       else
       {
        iDiff = iDiff + iNo1;
       }

        iNo = iNo / 10;
    }
  
    iDiffrence = iSum - iDiff;

    return iDiffrence;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Number : \n");
    scanf("%d",&iValue);

    iRet = DiffSum(iValue);

    printf("%d is The Ans",iRet);

    return 0;
}