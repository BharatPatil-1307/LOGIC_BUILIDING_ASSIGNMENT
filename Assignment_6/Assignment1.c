///////////////////////////////////////////////////////
//
//  File name :     Assignment1.c
//  Input :         25      50      100
//  Output :        Small   Medium  Large
//  Author :        Bharat Sanjay patil
//  Date :          20/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("OutPut :Small\n");
    }
    else if((iNo > 50) && (iNo <= 100))
    {
        printf("OutPut : Medium\n");
    }
    else
    {
        printf("OutPut : Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter The Number :");
    scanf("%d",&iValue);

    Number(iValue);


    return 0;
}