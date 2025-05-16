#include <stdio.h>

double CalculateArea(int iNo)
{
    double iArea = 0;
    iArea = (double)iNo * (double)iNo * 3.14;

    return iArea;
}

int main()
{
    int iRadius = 0;
    double dRet = 0;

    printf("Enter the Radius: \n");
    scanf("%d", &iRadius);

    dRet = CalculateArea(iRadius);

    printf("%lf is the Area\n", dRet);

    return 0;
}
