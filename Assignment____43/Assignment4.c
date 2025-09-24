#include <stdio.h>

int SmallDigit(int No)
{
    if (No < 10)  
    {
        return No;
    }

    int iDigit = No % 10;
    int iRecSmall = SmallDigit(No / 10);

    return (iDigit < iRecSmall) ? iDigit : iRecSmall;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number: ");
    scanf("%d", &iValue);

    if(iValue < 0) 
    {
        iValue = -iValue;
    }

    iRet = SmallDigit(iValue);

    printf("Smallest Digit is: %d\n", iRet);

    return 0;
}
