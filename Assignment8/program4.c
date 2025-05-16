#include <stdio.h>

double CaculateCelsius(float fTemp)
{
    double dCelsius = 0;

    dCelsius = ((fTemp - 32) * (5.0/9.0));

    return dCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter The Temprature \n");
    scanf("%f",&fValue);

    dRet = CaculateCelsius(fValue);

    printf("%lf is The tempratute",dRet);

    return 0;
}
