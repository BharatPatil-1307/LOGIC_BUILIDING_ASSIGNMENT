#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A')&&(ch <= 'Z'))
    {
        ch = ch + 32;
        printf("%c\n",ch);
    }
    else if((ch >= 'a')&&(ch <= 'z'))
    {
        ch = ch - 32;
        printf("%c\n",ch);
    }
    else
    {
        printf("%c\n",ch);
    }

}

int main()
{
    char ch = '\0';

    printf("Enter The Charecter :");
    scanf("%c",&ch);

    Display(ch);

    return 0;
}