///////////////////////////////////////////////////////
//
//  File name :     Assignment1.c
//  Descreption :   Write a program which accept number from
//                  user and display its multiplication of factors.
//  Author :        Bharat Sanjay patil
//  Date :          18/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int MulFact(int iNo)
{
    int iCnt = 0;
    int iMul = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d",iCnt);
            printf("*");
            iMul = iMul *iCnt;
        }
    }
    printf("\n");
    return iMul;


}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = MulFact(iValue);

    printf("%d",iRet);
}