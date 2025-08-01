///////////////////////////////////////////////////////
//
//  File name :     Assignment3.c
//  Input :         5 
//  Output :        8 (4 * 2)
//  Author :        Bharat Sanjay patil
//  Date :          20/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        printf("INVAILD INPUT ❌: Negative value is not in Factorial , But i am considering it is positive value \n");
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d*",iCnt);
            iFact = iFact * iCnt;
        }
    }
    printf("\n");
    return iFact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial  Of Number Is %d\n",iRet);

    return 0;
}