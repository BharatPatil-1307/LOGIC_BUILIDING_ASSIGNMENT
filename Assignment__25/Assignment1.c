#include<stdio.h>

void strlnX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    strlnX(Arr);

    printf("Converted String Small Charecters :%s\n",Arr);

    return 0;
}