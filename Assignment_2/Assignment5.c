///////////////////////////////////////////////////////
//
//  File name :     Assignment5.c
//  Descreption :   Accept number from user and check whether
//                  number is even or odd
//  Author :        Bharat Sanjay patil
//  Date :          16/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL cheEven(int iNo)
{

    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter The Number :");
    scanf("%d",&iValue);

    bRet = cheEven(iValue);

    if(bRet == TRUE)
    {
        printf("Number Is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}