#include<stdio.h>
#include<stdlib.h>

void DivisibleBy(int Arr[] , int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 5 == 0)
        {
            printf("%d\n",Arr[iCnt]);
        }
        
    }

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


    printf("Number Are divisible By 5 : \n");
   DivisibleBy(ptr, iLength);
    free(ptr);

    return 0;
}