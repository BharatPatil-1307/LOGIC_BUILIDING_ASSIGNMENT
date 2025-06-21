///////////////////////////////////////////////////////
//
//  File name :     Assignment1.c
//  Input :         5
//  Output :        * * * * * # # # # #
//  Author :        Bharat Sanjay patil
//  Date :          21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}