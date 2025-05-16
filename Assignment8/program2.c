#include <stdio.h>

double CalculateArea(float fNo , float fNo2)
{
    double iArea = 0;
    iArea = fNo * fNo2;

    return iArea;
}

int main()
{
    float fWidth = 0;
    float fBreadth = 0;
    double dRet = 0;

    printf("Enter the Width: \n");
    scanf("%f", &fWidth);

    printf("Enter the Breadth: \n");
    scanf("%f", &fBreadth);

    dRet = CalculateArea(fWidth,fBreadth);

    printf("%lf is the Area\n", dRet);

    return 0;
}
