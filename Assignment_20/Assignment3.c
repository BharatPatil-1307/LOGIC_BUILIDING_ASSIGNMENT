#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;  // return the index of first occurrence
        }
    }
    return -1;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter number to search: ");
    scanf("%d", &iValue);

    ptr = (int *)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Element %d: ", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    iRet = FirstOcc(ptr, iSize, iValue);
    if(iRet == -1)
    {
        printf("There is no such number.\n");
    }
    else
    {
        printf("First occurrence is at index: %d\n", iRet);
    }

    free(ptr);
    return 0;
}
