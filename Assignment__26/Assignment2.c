#include<stdio.h>


int  CountChar(char *str, char ch)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^'\n']",Arr);

    printf("Enter Charecter :");
    scanf(" %c", &cValue);

    iRet = CountChar(Arr,cValue);

    printf("Frequency of that charecter : %d\n",iRet);


    return 0;
}