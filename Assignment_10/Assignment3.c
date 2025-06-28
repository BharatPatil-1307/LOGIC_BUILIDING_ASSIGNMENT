#include <stdio.h>

int CountDigitRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;  // Convert negative number to positive
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;  // Extract last digit
        if(iDigit >= 3 && iDigit <= 7)
        {
            iCount++;       // Count digit if it lies between 3 and 7
        }
        iNo = iNo / 10;     // Remove last digit
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iResult = CountDigitRange(iValue);

    printf("Digits between 3 and 7 are: %d\n", iResult);

    return 0;
}
