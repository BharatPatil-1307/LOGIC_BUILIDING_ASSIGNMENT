#include<stdio.h>

void Reverse(char *str)
{
    char *Start = str;
    char *End = str;
    char temp = '\0';

    while(*End != '\0')
    {
        End++;
    }
    End--;

    // Reverse 
    while(Start < End) 
    {
        temp = *Start;
        *Start = *End;
        *End = temp;
        Start++;
        End--;
    }
}

int main()
{
    char Arr[50];

    printf("Enter String : ");
    scanf("%[^\n]s", Arr);
    
    Reverse(Arr);
    printf("Reverse : %s\n", Arr);

    return 0;
}
