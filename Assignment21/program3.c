#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[] , int iLength)
{
    int iCnt = 0;
    int iSma = 1;
    int iMax = 0;
    int iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       if(iSma > Arr[iCnt])
       {
        iSma = Arr[iCnt];
       }
       if(iMax < Arr[iCnt])
       {
        iMax = Arr[iCnt];
       }
    }
    iDiff = iMax - iSma;
    return iDiff;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

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

    iRet = Diff(ptr , iLength);

    printf("Difference is  : %d",iRet);

    free(ptr);

    return 0;
}