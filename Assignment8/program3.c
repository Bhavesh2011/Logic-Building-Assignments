#include <stdio.h>

int CalculateMeter(int iNo)
{
   int iKm = 0;
   iKm = iNo * 1000;

   return iKm;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Kilometers: \n");
    scanf("%d", &iValue);

    iRet = CalculateMeter(iValue);

    printf("%d is the Meters\n", iRet);

    return 0;
}
