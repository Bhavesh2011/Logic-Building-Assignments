#include<stdio.h>
#include<stdlib.h>

int CountEvenFreq(int Arr[] , int iLength)
{
    int iCnt = 0;
    int iCnt1 = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
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

    printf("Enter The Number of Elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate The memory");
        return -1;
    }

    printf("Enter The Elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }


    printf("Frequency Of even Nubers :  \n");
    iRet = CountEvenFreq(ptr, iLength);
    printf("%d\n",iRet);
    free(ptr);

    return 0;
}