#include<stdio.h>

void Display(int iNo)
{
    int iNo1 = 0;

    while(iNo != 0)
    {
        iNo1 = iNo % 10;
        printf("%d\n",iNo1);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter The Value : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}