///////////////////////////////////////////////////////
//
//  File name :     Assignment5.c
//  Descreption :   Write a program which accept number from
//                  user and print that number of $&* on screen
//  Author :        Bharat Sanjay patil
//  Date :          20/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ \t*\t");
    }
    printf("\n");
}


int main()
{

    int iValue = 0;

    printf("Enter the number :");
    scanf("%d",&iValue);

    pattern(iValue);


    return 0;
}