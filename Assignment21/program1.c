#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[] , int iLength)
{
    int iCnt = 0;
    int iMax = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       if(iMax < Arr[iCnt])
       {
        iMax = Arr[iCnt];
       }
    }
    return iMax;
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

    iRet = Maximum(ptr , iLength);

    printf("Maximum is  : %d",iRet);

    free(ptr);

    return 0;
}