#include<stdio.h>

int CountWhiteSpace(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^'\n]s",Arr);

    iRet = CountWhiteSpace(Arr);

    printf("CountWhiteSpace  Charecters :%d\n",iRet);

    return 0;
}