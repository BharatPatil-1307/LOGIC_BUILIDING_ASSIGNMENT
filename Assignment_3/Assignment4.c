///////////////////////////////////////////////////////
//
//  File name :     Assignment4.c
//  Descreption :   Accept one Character from user and 
//                  convert case of that character
//  Author :        Bharat Sanjay patil
//  Date :          16/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

void DisplayConvert(char Cvalue)
{
   if((Cvalue >= 'a') && (Cvalue <= 'z'))
   {
        printf("Converted Charecter Is : %c",Cvalue -32);
        printf("\n");
   }
   else if((Cvalue >= 'A') && (Cvalue <= 'Z'))
   {
        printf(" Charecter Is : %c",Cvalue +32);
        printf("\n");
   }
}


int main()
{
    char cValue = '\0';

    printf("Enter Character You Want Convert :");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}