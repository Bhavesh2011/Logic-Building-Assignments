#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[] , int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    printf("Numbers within the range [%d, %d] are:\n", iStart, iEnd);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
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
    int iUpperLimit = 0;
    int iLowerLimit = 0;

    printf("Enter The Number of Elements : \n");
    scanf("%d",&iLength);

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

    printf("Enter The Lower Limit : \n");
    scanf("%d",&iLowerLimit);

    printf("Enter The Upper Limit : \n");
    scanf("%d",&iUpperLimit);


    printf("Enter The Elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("The entered elements are : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }
    printf("\n");

    Range(ptr, iLength, iLowerLimit, iUpperLimit);

    free(ptr);

    return 0;
}