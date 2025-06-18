///////////////////////////////////////////////////////
//
//  File name :     Assignment2.c
//  Descreption :   Write a program which accept number from
//                  user and display all its non factors.
//  Author :        Bharat Sanjay patil
//  Date :          16/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt ) != 0)
        {
            printf("%d \t",iCnt);
        }
    }
    printf("\n");
}


int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}