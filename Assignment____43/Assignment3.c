#include<stdio.h>

int SmallCharecter(char *str)
{
    if(*str == '\0')  
    {
        return 0;
    }

    if((*str >= 'a') && (*str <= 'z'))
    {
        return 1 + SmallCharecter(str + 1); 
    }
    else
    {
        return SmallCharecter(str + 1);
    }

}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter the String : ");
    scanf("%[^\n]s",Arr);

    iRet =  SmallCharecter(Arr);
    printf("Small Charectes Are : %d\n", iRet);

    return 0;
}