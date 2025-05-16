#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    int iNo1 = 0;
    bool bAns = false;
    while(iNo != 0)
    {
       iNo1 = iNo % 10;
       if(iNo1 == 0)
       {
        bAns = true;
        break;
        
       }
        
        iNo = iNo / 10;
    }

    return bAns;

}

int main()
{
    int iValue = 0;
    bool bRet = 0;
    printf("Enter The Value : \n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == true)
    {
        printf("Have a zero");
    }
    else
    {
         printf("Dont have a zero");
    }

    return 0;
}