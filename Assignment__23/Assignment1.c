#include <stdio.h>

int CountCapital(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;   
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String : ");
    fgets(Arr, sizeof(Arr), stdin);   // ✅ Safe input (max 19 chars + '\0')

    iRet = CountCapital(Arr);

    printf("Capital Letters Are : %d\n", iRet);

    return 0;
}
