///////////////////////////////////////////////////////
//
//  File name :     Assignment3.c
//  Descreption :   Accept one number from user if number
//                  is less than 10 then print "Hello" 
//                  otherwise print "Demo"..
//  Author :        Bharat Sanjay patil
//  Date :          16/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello \n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}