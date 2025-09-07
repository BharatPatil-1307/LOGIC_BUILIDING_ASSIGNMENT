#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSpecial(char ch)
{
    BOOL bFlag = FALSE;

    if(((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')))
    {
        bFlag = FALSE;
    }
    else if((ch >= '0') && (ch <= '9'))
    {
        bFlag = FALSE;
    }
    else
    {
        bFlag = TRUE;
    }

    return bFlag;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the Special Symbol :");
    scanf("%c",&cValue);

    bRet = CheckSpecial(cValue);

    if(bRet == TRUE)
    {
        printf(" It is a Special Symbol\n");
    }
    else
    {
        printf(" It is not Special Symbol\n");
    }

    return 0;
}