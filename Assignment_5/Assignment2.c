///////////////////////////////////////////////////////
//
//  File name :     Assignment2.c
//  Input :         8
//  Output :        1 2 3 4 5 6 7 8
//  Author :        Bharat Sanjay patil
//  Date :          20/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    printf("Output:");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("\t%d",iCnt);
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