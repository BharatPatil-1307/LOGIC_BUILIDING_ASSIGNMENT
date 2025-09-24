#include<stdio.h>

int WhiteSpace(char *str)
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
    char Arr[100];   
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^\n]", Arr);  

    printf("You entered: %s\n", Arr);

    iRet = WhiteSpace(Arr);

    printf("White Spaces are : %d\n", iRet);

    return 0;
}
