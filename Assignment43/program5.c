#include<stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
        Reverse(iNo);
    }

    return iRev;

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter The value");
    scanf("%d",&iValue);
    iRet = Reverse(iValue);
    printf("%d",iRet);

    return 0;
}