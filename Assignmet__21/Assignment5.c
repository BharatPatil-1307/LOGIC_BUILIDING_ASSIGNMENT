#include<stdio.h>
#include<stdlib.h>

void DigitSummation(int Arr[], int iLength)
{
    int iCnt = 0 , iNo = 0, iSum = 0;

    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];

        iSum = 0 ;
        while(iNo != 0)
        {
            iSum += iNo % 10 ;
            iNo = iNo / 10;
        }    
        printf("%d ",iSum);
    }
    printf("\n"); 
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int * ptr = NULL;

    printf("Enter the number of elements :");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unallocate the memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Elements %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    DigitSummation(ptr,iSize);

    free(ptr);

    return 0;
}