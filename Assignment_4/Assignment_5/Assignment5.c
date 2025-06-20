///////////////////////////////////////////////////////
//
//  File name :     Assignment5.c
//  Input :         4
//  Output :        4 8 12 16 20
//  Author :        Bharat Sanjay patil
//  Date :          20/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMul = 0;

    printf("OutPut :");
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf(" %d",iNo * iCnt);
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter Number that you want first 5 number of multiplication :");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}