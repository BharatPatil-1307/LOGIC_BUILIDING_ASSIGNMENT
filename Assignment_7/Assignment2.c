///////////////////////////////////////////////////////
//
//  File name :     Assignment2.c
//  Input :         USD : 10
//  Output :        INR :700
//  Author :        Bharat Sanjay patil
//  Date :          20/06/2025
//
//////////////////////////////////////////////////////


#include<stdio.h>

int DollarToINR(int iNo)
{
    int iCnt = 0;
    int iMoney = 0;

    if( iNo < 0 )
    {
        printf("INVAILD INPUT ❌: Negative value is not in Factorial , But i am considering it is positive value \n");
        iNo = -iNo;
    }
        iMoney = iNo * 70;
        return iMoney;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number of USD :");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("OUTPUT : Value in INR is :  %d \n",iRet);

    return 0;
}