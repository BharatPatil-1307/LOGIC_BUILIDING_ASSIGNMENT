#include<stdio.h>

int CountOdd(int iNo)
{
    int iCnt = 0;
    int iDigit = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 1)
        {
            iCnt = iCnt + 1;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number to Count Odd Digit :");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("OUTPUT : %d\n",iRet);


    return 0;
}