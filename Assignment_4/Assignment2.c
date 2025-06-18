///////////////////////////////////////////////////////
//
//  File name :     Assignment2.c
//  Descreption :   Write a program which accept number from
//                  user and display its factors in decreasing oder
//  Author :        Bharat Sanjay patil
//  Date :          16/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo -1; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf(" %d ",iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number to print Reverse Factor :");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}