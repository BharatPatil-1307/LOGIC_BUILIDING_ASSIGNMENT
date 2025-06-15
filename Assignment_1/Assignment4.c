///////////////////////////////////////////////////////
//
//  File name :     Assignment4.c
//  Descreption :   Accept one numbers and check whether 
//                  is divisible by 5 or not
//  Author :        Bharat Sanjay patil
//  Date :          15/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool Check(int iNo)
{
    if((iNo % 5) == 0)
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

    printf("Enter the number :");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible By 5 \n");
    }
    else
    {
        printf("Not Divisible By 5 \n");
    }

    return 0;
}