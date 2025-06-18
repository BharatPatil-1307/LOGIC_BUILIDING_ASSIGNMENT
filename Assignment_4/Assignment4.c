///////////////////////////////////////////////////////
//
//  File name :     Assignment2.c
//  Descreption :   Write a program which accept number from
//                  user and return summation of all its non
//                  factors..
//  Author :        Bharat Sanjay patil
//  Date :          18/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter The Number That Number You Want Non Factors :");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Summation Of Non Factors Is :%d\n",iRet);



    return 0;
}