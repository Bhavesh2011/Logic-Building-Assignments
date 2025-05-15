#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iTable = 1;

    for(iCnt = 10;iCnt >= 1;iCnt--)
    {
        iTable = iCnt * iNo;
        printf("%d\n",iTable);
    }

}


int main()
{
    int iValue = 0;

    printf("Enter The Number : \n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}