#include<stdio.h>

int Display(int iCount)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= iCount ; iCnt++)
    {
        printf("*\n");
    }

}
int main()
{
    int iValue = 0;
    printf("Enter The Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}