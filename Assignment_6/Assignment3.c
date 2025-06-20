///////////////////////////////////////////////////////
//
//  File name :     Assignmentc.c
//  Input :         5
//  Output :        120 (5 * 4 * 3 * 2 * 1)
//  Author :        Bharat Sanjay patil
//  Date :          20/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if(iNo < 0)
    {
        printf("INVALID INPUT : Negative value is not in Factorial , But i am considering it is positive value \n");
        iNo = -iNo;
    }
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
        printf("%d * ",iCnt);
    }
    printf("\n");

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is :%d \n",iRet);


    return 0;
}

