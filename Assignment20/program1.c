#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[] , int iLength, int iNo)
{
    int iCnt = 0;
    BOOL bRet = FALSE;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bRet = TRUE;
            break;
        }
    }
    return bRet;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;
    BOOL bRet = FALSE;
    int iValue = 0;

    printf("Enter The Number of Elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate The memory\n");
        return -1;
    }

    printf("Enter The Number to search: \n"); // Clarified prompt
    scanf("%d",&iValue); // Removed \n from here

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

    bRet = Check(ptr, iLength, iValue);

    if(bRet == TRUE)
    {
        printf("%d is present\n",iValue);
    }
    else
    {
        printf("%d is not present\n",iValue);
    }

    free(ptr);

    return 0;
}