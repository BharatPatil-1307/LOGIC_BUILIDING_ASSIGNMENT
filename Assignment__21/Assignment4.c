#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0 , iCount1 = 0;

    for(iCnt = 0 ; iCnt < iLength;iCnt++)
    {
        if((Arr[iCnt] >= 100)&&(Arr[iCnt] <= 999))
        {
            printf("%d\t",Arr[iCnt]);
        }
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

    Display(ptr,iSize);

    free(ptr);

    return 0;
}