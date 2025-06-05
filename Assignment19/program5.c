#include<stdio.h>
#include<stdlib.h>


int CheckFreq(int Arr[] , int iLength , int iNo)
{
    int iCnt = 0;
    int iCnt1 = 0;
   

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCnt1++;
        }
    }
    return iCnt1;
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

    printf("Enter The Number which you want to check Frequency : ");
    scanf("%d",&iValue);

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

    iRet = CheckFreq(ptr, iLength, iValue);

    printf("Frequency of the %d is : %d ",iValue,iRet);

    free(ptr);

    return 0;
}