#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0;
    int j = 0;
    
    int iCnt = 1;
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, iCnt = 1; j <= iCol; j++ , iCnt++)
        {
            if((i % 2) != 0)
            {
                printf("%d\t",iCnt);
            }
            else
            {
                
                printf("%d\t",-iCnt);

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
