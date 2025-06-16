///////////////////////////////////////////////////////
//
//  File name :     Assignment2.c
//  Descreption :   Accept one number from user and print
//                  that numbers of * on screen
//  Author :        Bharat Sanjay patil
//  Date :          16/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{

    if(iNo < 0)         // Updater
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        printf("* \t");
        iNo--;
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