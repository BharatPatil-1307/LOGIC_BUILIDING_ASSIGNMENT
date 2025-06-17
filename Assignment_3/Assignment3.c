///////////////////////////////////////////////////////
//
//  File name :     Assignment3.c
//  Descreption :   Write a program which accept one number from user
//                  and print even factors of that number.
//  Author :        Bharat Sanjay patil
//  Date :          17/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");
}


int main()
{
    int iValue = 0;

    printf("Enter The Number :");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}
