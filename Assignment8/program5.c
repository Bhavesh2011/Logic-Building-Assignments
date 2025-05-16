#include <stdio.h>

double SquareMeter(int iNo)
{
    double iMeter = 0;
    iMeter = iNo * 0.0929;

    return iMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0;

    printf("Enter the Value: \n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("%lf is the Value\n", dRet);

    return 0;
}
