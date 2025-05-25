#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt1 = 1;
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iCnt1);
            iCnt1++;

            if(iCnt1 == 10) 
            {
                iCnt1 = 1;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter The Row : \n");
    scanf("%d",&iValue1);

    printf("Enter The Column : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
