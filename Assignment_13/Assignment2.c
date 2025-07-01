#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'A';
    char cha = 'a';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'A', cha = 'a'; j <= iCol; j++, ch++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t",cha);
            }
            else
            {
                printf("%c\t",ch);
            }
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Eneter Number Of Rows :");
    scanf("%d",&iValue1);

    printf("Eneter Number Of Colums :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    
    return 0;
}