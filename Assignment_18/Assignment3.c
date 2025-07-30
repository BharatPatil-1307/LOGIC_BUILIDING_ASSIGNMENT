#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt <= iLength; iCnt++)
    {
         if((Arr[iCnt] % 2 == 0 )&&(Arr[iCnt] % 5 == 0))
        {
            printf(" %d\t",Arr[iCnt]);   
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter The Number Of Elements :");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unallocate to the memory");
        return -1;
    }

    printf("Enter %d elements ",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d elements : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    
    Display(ptr, iSize);
    free(ptr);

    return 0;
}