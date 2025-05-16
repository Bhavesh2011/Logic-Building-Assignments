#include<stdio.h>

int CountEven(int iNo)
{
    int iNo1 = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iNo1 = iNo % 10;
        if((iNo1 % 2) == 0)
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

    iRet = CountEven(iValue);

    printf("%d is The even Number",iRet);

    return 0;
}