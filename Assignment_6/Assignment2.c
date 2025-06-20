///////////////////////////////////////////////////////
//
//  File name :     Assignment2.c
//  Input :         9      -3      12
//  Output :        Nine   Three  invalid Input
//  Author :        Bharat Sanjay patil
//  Date :          20/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo == 1)
    {
        printf("One\n");
    }
    else if(iNo == 2 || iNo == -2)
    {
        printf("Two\n");
    }
    else if(iNo == 3 || iNo == -3)
    {
        printf("Three\n");
    }
    else if(iNo == 4 || iNo == -4)
    {
        printf("Four\n");
    }
    else if(iNo == 5 || iNo == -5)
    {
        printf("Five\n");
    }
    else if(iNo == 6 || iNo == -6)
    {
        printf("Six\n");
    }
    else if(iNo == 7 || iNo == -7)
    {
        printf("Seven\n");
    }
    else if(iNo == 8 || iNo == -8)
    {
        printf("Eight\n");
    }
    else if(iNo == 9 || iNo == -9)
    {
        printf("Nine\n");
    }
    else
    {
        printf("INVALID INPUT : Only Single Digit Number\n");
    }

}


int main()
{
    int iValue = 0;

    printf("Enter number one digit number to print it into word :");
    scanf("%d",&iValue);

    Display(iValue);



    return 0;
}