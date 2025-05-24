#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iNo = iRow;

    for(i = 1; i <= iRow; i++)
    {
        for (j = 1, iNo = iCol; j <= iCol; j++,iNo--)
        {
            printf("%d\t",iNo);
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