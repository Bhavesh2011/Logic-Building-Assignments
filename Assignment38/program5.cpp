#include <iostream>

template<class T>
T Smallest(T *arr, int iSize)
{
    T iSma = arr[1];
    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] < iSma)
        {
            iSma = arr[i];
        }
    }
    return iSma;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int iSum = Smallest(arr, 5);
    printf("%d\n", iSum);

    float brr[] = {10.0f, 3.7f, 9.8f, 8.7f};
    float fSum = Smallest(brr, 4);
    printf("%f\n", fSum);

    return 0;
}