#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Numbers with exactly 3 digits are:\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int num = Arr[iCnt];
        if (num >= 100 && num <= 999)
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter The Number of Elements : \n");
    scanf("%d", &iLength);

    if (iLength <= 0) {
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
        printf("Element %d: ", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    printf("The entered elements are : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\t", ptr[iCnt]);
    }
    printf("\n");

    Digits(ptr, iLength);

    free(ptr);

    return 0;
}