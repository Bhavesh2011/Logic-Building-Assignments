#include <iostream>

template<class T>
T Largest(T no1, T no2)
{
    T Max = 0;
    Max = no2;
    if (no1 > no2)
    {
        Max = no1;
    }
    
    return Max;

}
int main()
{
    int iRet = Largest(10, 20);
    printf("%d\n", iRet);

    float fRet = Largest(10.0f, 20.0f);
    printf("%f\n", fRet);

    return 0;
}