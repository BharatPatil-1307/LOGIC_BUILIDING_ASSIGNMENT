///////////////////////////////////////////////////////
//
//  File name :     Assignment4.c
//  Descreption :   Accept two numbers from user and d
//                  display first bumber in second number of time.
//                  otherwise print "Demo"..
//  Author :        Bharat Sanjay patil
//  Date :          16/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    if(iFrequency <= 0) 
    {
        iFrequency = -iFrequency;
    }
    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    printf("Enter The Frequency :");
    scanf("%d",&iCount);

    Display(iValue,iCount);


    return 0;
}