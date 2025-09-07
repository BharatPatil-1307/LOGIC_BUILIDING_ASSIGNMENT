#include<stdio.h>

void strtoggelX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[50];

    printf("Enter String :");
    scanf("%[^'\n]s",Arr);

    strtoggelX(Arr);

    printf("Converted String UpperCase Charecters :%s\n",Arr);

    return 0;
}