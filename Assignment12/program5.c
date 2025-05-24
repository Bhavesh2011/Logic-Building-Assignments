#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 0;

    for(i = 1 , iCnt = 1; i <= iRow; i++, iCnt++)
    {
        for (j = 1; j <= iCol; j++)
        {
            printf("%d\t",iCnt);
        }

        printf("\n");
        
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter The nuber of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter The nuber of Coloumns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}