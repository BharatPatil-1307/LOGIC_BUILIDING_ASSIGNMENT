///////////////////////////////////////////////////////
//
//  File name :     Assignment5.c
//  Descreption :   Accept one Character from user and 
//                  check whether that charecter is vowel
//                  (a,e,i,o,u) or not..
//  Author :        Bharat Sanjay patil
//  Date :          17/06/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL ChkVowel(char CValue)
{
    if(CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U' ||CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main(){

    char cValue = '\0';

    BOOL bRet = FALSE;

    printf("Enter Character : ");

    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("it is not Vowel\n");
    }
}
