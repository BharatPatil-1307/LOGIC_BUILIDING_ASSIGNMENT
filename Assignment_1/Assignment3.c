#include<stdio.h>

void Display()
{
    int iCnt = 0;
    int  i = 5;
    while(i >= 1)
    {
        printf("%d \t",i);
        i--;
    }
    printf("\n");
}

int main()
{
    Display();

    return 0;
}