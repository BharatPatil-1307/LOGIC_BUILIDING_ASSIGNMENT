///////////////////////////////////////////////////////
//
//  File name :     Assignment2.c
//  Descreption :   Write a program which accept one number from user
//                  and print even factors of that number.
//  Author :        Bharat Sanjay patil
//  Date :          17/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d \t",iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number That You Want Factors Of That Number :");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
} 
