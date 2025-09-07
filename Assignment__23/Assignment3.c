#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A')&&(ch <= 'Z'))
    {
        while(ch <='Z')
        {
            printf("%c\t",ch);
            ch++;
        }
        printf("\n");
    }
    else if((ch >= 'a')&&(ch <= 'z'))
    {
        while(ch >= 'a')
        {
            printf("%c\t",ch);
            ch--;
        }
        printf("\n");
    }
    else
    {
        printf("%c Invaild input\n",ch);
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