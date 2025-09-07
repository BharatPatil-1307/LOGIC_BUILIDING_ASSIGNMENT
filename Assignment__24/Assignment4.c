#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char *str)
{
    bool bFlag = false;
    if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' && *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Arr[50];
    bool bRet = false;

    printf("Enter String :");
    scanf("%[^'\n']s",Arr);

    bRet = CheckVowel(Arr);

    if(bRet == true)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It not Vowel\n");
    }

    return 0;
}