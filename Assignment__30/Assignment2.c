#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChecBit(UINT iNo)
{
    UINT iMask1 = 1 << 4;
    UINT iMask2 = 1 << 17;

    if((iNo & iMask1) && (iNo & iMask2))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%u", &iValue);

    bRet = ChecBit(iValue);

    if(bRet == TRUE)
    {
        printf("5th and 18 bit is ON\n");
    }
    else
    {
        printf("5th and 18 bit is Not ON\n");
    }

    return 0;
}
