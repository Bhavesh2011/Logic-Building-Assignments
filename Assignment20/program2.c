#include<stdio.h>
#include<stdlib.h>



int FirstOcc(int Arr[] , int iLength, int iNo)
{
    int iCnt = 0;
    int iNo1 = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
           iNo1 = ++iCnt;
            break;
        }
        else
        {
            iNo1 = -1;
        }
    }
    return iNo1;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;
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

    iRet = FirstOcc(ptr, iLength, iValue);

    printf("The index is : %d",iRet);
    free(ptr);

    return 0;
}