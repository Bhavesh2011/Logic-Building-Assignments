#include <iostream>

template<class T>
T Largest(T *arr, int iSize)
{
    T iLarg = 0;
    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] > iLarg)
        {
            iLarg = arr[i];
        }
    }
    return iLarg;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int iSum = Largest(arr, 5);
    printf("%d\n", iSum);

    float brr[] = {10.0f, 3.7f, 9.8f, 8.7f};
    float fSum = Largest(brr, 4);
    printf("%f\n", fSum);

    return 0;
}