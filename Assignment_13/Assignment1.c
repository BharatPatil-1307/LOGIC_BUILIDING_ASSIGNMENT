#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'A';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'A'; j <= iCol; j++,ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
}


int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number Of Rows :");
    scanf("%d",&iValue1);

    printf("Enter Number Of Colums :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);


    return 0;
}