#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;


UINT Offbit(UINT iNo)
{   
    UINT iMask = 1 << 6;   // Mask for 7th bit
    iMask = ~iMask;        // Invert → all 1 except 7th bit
    return iNo & iMask;    // Turn OFF 7th bit
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number :  ");
    scanf("%u",&iValue);   

    iRet = Offbit(iValue);

    printf("Modified Number : %u\n",iRet);
   
    return 0;
}
