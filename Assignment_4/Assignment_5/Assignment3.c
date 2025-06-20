///////////////////////////////////////////////////////
//
//  File name :     Assignment3.c
//  Input :         4
//  Output :        -4 -3 -2 -1 0 1 2 3 4
//  Author :        Bharat Sanjay patil
//  Date :          20/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    printf("Output:");
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}


int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}