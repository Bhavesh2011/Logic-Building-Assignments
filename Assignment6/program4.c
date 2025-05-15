#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0;
    int iTable = 1;

    for(iCnt = 1;iCnt <= 10;iCnt++)
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

    DisplayTable(iValue);

    return 0;
}