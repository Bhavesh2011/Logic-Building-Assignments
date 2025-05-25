#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0, j = 0;
    int num = 0;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)  
        {
            num = 2;
        }
        else            
        {
            num = 1;
        }

        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", num);
            num += 2;
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
