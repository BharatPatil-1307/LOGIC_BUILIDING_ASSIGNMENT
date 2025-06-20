///////////////////////////////////////////////////////
//
//  File name :     Assignmentc4.c
//  Input :         5
//  Output :        120 (5 * 4 * 3 * 2 * 1)
//  Author :        Bharat Sanjay patil
//  Date :          20/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        printf("INVALID INPUT :");
    }
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Table Number :");
    scanf("%d",&iValue);

    Number(iValue);


    return 0;
}