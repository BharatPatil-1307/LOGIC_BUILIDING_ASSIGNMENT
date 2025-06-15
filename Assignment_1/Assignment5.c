///////////////////////////////////////////////////////
//
//  File name :     Assignment5.c
//  Descreption :   Accept the numbers user and print *
//  Author :        Bharat Sanjay patil
//  Date :          15/06/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* \t");
    }
    printf("\n");
}

int main()
{   
    int iValue = 0;
    iValue = 5;

    printf("Enter The Number :");
    scanf("%d",&iValue);
    
    Accept(iValue);

    return 0;
}