#include<stdio.h>

int CountOdd(int iNo)
{
    int iNo1 = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iNo1 = iNo % 10;
        if((iNo1 % 2) != 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }

    return iCnt++;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Number : \n");
    scanf("%d",&iValue);

    iRet = Countodd(iValue);

    printf("%d is The odd Number",iRet);

    return 0;
}