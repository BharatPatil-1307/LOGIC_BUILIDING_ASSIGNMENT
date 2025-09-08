#include<stdio.h>

void StrCpy(char *str, char *dest)
{
    while(*str != 0)
    {
        *dest = *str;
        str++;
        dest++;
    }
    dest--;
}

int main()
{

    char Arr[30] = "Marvellous Multi OS";
    char Brr[30];

    StrCpy(Arr,Brr);

    printf("Actuly String is : %s\n",Arr);

    printf("Upadeted String is : %s\n",Brr);


    return 0;
}