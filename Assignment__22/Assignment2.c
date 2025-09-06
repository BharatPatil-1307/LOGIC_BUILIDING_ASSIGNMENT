#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckCapital(char ch)
{
    BOOL bFlag = FALSE;

    if((ch >= 'A')&&(ch <= 'Z')) 
    {
        bFlag = TRUE ;
    }
    return bFlag;

}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the charecter :");
    scanf("%c",&cValue);

    bRet = CheckCapital(cValue);

    if(bRet == TRUE)
    {
        printf(" %c  it is Capital Charecter..\n",cValue);
    }
    else
    {
        printf(" %c it is not Capital Charecter..\n",cValue);
    }


    return 0;
}