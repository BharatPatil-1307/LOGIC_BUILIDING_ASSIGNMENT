#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i == 1) ||( i == iCol)||(j == 1)||(j == iCol)||(i==j))
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;


    printf("Enter The Number Of Rows :");
    scanf("%d",&iValue1);

    printf("Enter The Number Of Colums :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);


    return 0;
}