#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

bool ChkZero(int iNo)
{
    
    int iDigit = 0;

    if(iNo == 0)
    {
        return TRUE;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return TRUE; 
        }

        iNo = iNo / 10;
    }

    
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number That You Want Zero Present or Not :");
    scanf("%d",&iValue);
    bRet = ChkZero(iValue);
    if(bRet == TRUE)
    {
        printf("Yes , the number contains Zero...\n");
    }
    else
    {
        printf("No , the number contains Zero...\n");
    }

    return 0;
}