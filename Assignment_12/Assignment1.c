#include<stdio.h>

void Patter(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow < 0)
    {
        printf("Invalid Input");
        return;
    }
    else if(iCol < 0)
    {
        printf("Invalid Input");
        return;
    }

    printf("\n");

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf(" *\t");
        }
        printf("\n");
    }

}

int main()
{

    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Row :");
    scanf("%d",&iValue1);

    printf("Enter Colum :");
    scanf("%d",&iValue2);

    Patter(iValue1,iValue2);

    return 0;
}