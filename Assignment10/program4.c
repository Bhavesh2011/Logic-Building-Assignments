#include<stdio.h>

int Multiplication(int iNo)
{
    int iNo1 = 0;
    int iMult = 1;

    while(iNo != 0)
    {
        iNo1 = iNo % 10;
        iMult = iMult * iNo1;
        iNo = iNo / 10;
    }
    return iMult;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Number : \n");
    scanf("%d",&iValue);

    iRet = Multiplication(iValue);

    printf("%d is The Ans",iRet);

    return 0;
}