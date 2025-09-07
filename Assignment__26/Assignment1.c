#include<stdio.h>

#define TRUE 1  
#define FALSE 0

typedef int BOOL;

BOOL CheckCharecter(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{   
    char Arr[50];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter String :");
    scanf("%[^'\n']",Arr);

    printf("Enter Charecter :");
    scanf(" %c", &cValue);

    bRet = CheckCharecter(Arr,cValue);

    if(bRet == TRUE)
    {
        printf("Charecter is present\n");
    }
    else
    {
        printf("Charecter is not present\n");
    }

    return 0;
}