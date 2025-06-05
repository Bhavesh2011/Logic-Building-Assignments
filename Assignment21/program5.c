#include<stdio.h>
#include<stdlib.h>

void SummationOfDigits(int Arr[], int iLength)
{
    int iCnt = 0;
    int iDigit = 0;
    int iSum = 0;
    int iNo = 0;

    printf("Summation of digits for each number:\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum = 0;

        if (iNo == 0)
        {
            iSum = 0;
        }
        else
        {
            while (iNo != 0)
            {
                iDigit = iNo % 10;
                iSum = iSum + iDigit;
                iNo = iNo / 10;
            }
        }
        printf("Sum of digits for %d is: %d\n", Arr[iCnt], iSum);
    }
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter The Number of Elements : \n");
    scanf("%d", &iLength);

    if (iLength <= 0)
    {
        printf("Number of elements must be positive.\n");
        return -1;
    }

    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate The memory\n");
        return -1;
    }

    printf("Enter The Elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("The entered elements are : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\t", ptr[iCnt]);
    }
    printf("\n");

    SummationOfDigits(ptr, iLength);

    free(ptr);

    return 0;
}