#include<stdio.h>

void DisplayDigit(char *str)
{
    printf("Display Only Digits : ");
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c",*str);
        }
        str++;
    }
    printf("\n");
}

int main()
{
    char Arr[50];

    printf("Enter String :");
    scanf("%[^'\n]s",Arr);

    DisplayDigit(Arr);

    return 0;
}