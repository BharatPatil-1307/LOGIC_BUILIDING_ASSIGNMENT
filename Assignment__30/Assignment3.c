#include <stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChecBit(UINT iNo)
{
    UINT iMask1 = 1 << 6;   // 7th bit
    UINT iMask2 = 1 << 14;  // 15th bit
    UINT iMask3 = 1 << 20;  // 21st bit
    UINT iMask4 = 1 << 27;  // 28th bit

    if( (iNo & iMask1) && (iNo & iMask2) && (iNo & iMask3) && (iNo & iMask4) )
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
        printf("7th, 15th, 21st and 28th bits are ON\n");
    }
    else
    {
        printf("7th, 15th, 21st and 28th bits are NOT all ON\n");
    }

    return 0;
}
