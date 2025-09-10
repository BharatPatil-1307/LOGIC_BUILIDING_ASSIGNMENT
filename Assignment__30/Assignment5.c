#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChecBit(UINT iNo)
{
    UINT iMask1 = 1 << 0;   // 1th bit
    UINT iMask2 = 1 << 31;  // 32th bit

    if( (iNo & iMask1) && (iNo & iMask2))
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
        printf("1th bit and 32th bit is ON\n");
    }
    else
    {
        printf("1th bit and last bit is NOT ON\n");
    }

    return 0;
}
