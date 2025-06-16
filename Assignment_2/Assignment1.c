///////////////////////////////////////////////////////
//
//  File name :     Assignment1.c
//  Descreption :   Accept one number from user and print
//                  that numbers of * on screen
//  Author :        Bharat Sanjay patil
//  Date :          16/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)         // Updater
    {
        iNo = - iNo;
    }

    while(iCnt < iNo)
    {
        printf("* \t");
        iCnt++;
    }

    printf("\n");

}

int main()
{   
    int iValue = 0;

    printf("Enter The Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}