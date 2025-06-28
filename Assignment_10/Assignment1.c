#include<stdio.h>

int CountEven(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
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

    printf("Enter number to Count Even Digit :");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("OUTPUT : %d\n",iRet);


    return 0;
}