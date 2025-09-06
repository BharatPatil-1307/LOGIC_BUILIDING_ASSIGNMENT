#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckDigits(char ch)
{
    BOOL bFlag = FALSE;

    if((ch >= '0')&&(ch <= '9')) 
    {
        bFlag = TRUE ;
    }
    return bFlag;
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;


    printf("Enter the Character : ");
    scanf("%c",&cValue);
    bRet = CheckDigits(cValue);
    if(bRet == TRUE)
    {
        printf(" %c : It is Digits\n",cValue);
    }
    else
    {
        printf(" %c : It is not a Digits\n",cValue);
    }
    return 0 ;
}
