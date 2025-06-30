#include <iostream>
#include <cstdio>
#include <algorithm>

template<class T>
void Reverse(T *arr, int iSize)
{
    int iStart = 0;
    int iEnd = iSize - 1;

    while(iStart < iEnd)
    {
        T temp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iSize = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < iSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    Reverse(arr, iSize);

    for(int i = 0; i < iSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}