///////////////////////////////////////////////////////
//
//  File name :     Assignment1.c
//  Descreption :   Write a program which accept one number from user
//                  and print that number of even number on srceen
//  Author :        Bharat Sanjay patil
//  Date :          17/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void printEven(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        return;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       printf("%d\t",iCnt * 2);
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    printEven(iValue);

    return 0;
}
