#include<stdio.h>

int CountTwo(int iNo)
{
    int iCnt = 0;
    int iNo1 = 0;

    while (iNo != 0)
    {
        iNo1 = iNo % 10;
        if(iNo1 < 6)
        {
            iCnt++;
        }
        iNo = iNo / 10; 
    }
    return iCnt;    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Number : \n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("%d",iRet);

    return 0;
}