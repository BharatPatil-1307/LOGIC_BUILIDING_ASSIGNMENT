///////////////////////////////////////////////////////
//
//  File name :     Assignmentc5.c
//  Input :         2
//  Output :        20 18 16 14 12 10 8 6 4 2
//  Author :        Bharat Sanjay patil
//  Date :          20/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

void TableRev( int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        printf("INVALID INPUT :");
    }
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d ⤬ %d = %d\n",iNo,iCnt,iNo * iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}