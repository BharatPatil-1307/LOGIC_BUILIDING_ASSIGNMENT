#include<stdio.h>

int CountFreq(char *str)
{
    int iCountCap = 0, iCountSmall = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCap++;
        }
        str++;
    }
    return iCountCap - iCountSmall;
}

int main()
{
    char Arr[50];
    int iRet = 0 ;

    printf("Enter String : ");
    scanf("%[^\n]s", Arr);

    iRet = CountFreq(Arr);
    
    printf("Difference between Capital and Small letters : %d\n", iRet);

    return 0 ;
}
