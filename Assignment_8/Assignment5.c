#include<stdio.h>

double SqureMeter(int iNo)
{
    double dSqure = 0.0929;

    dSqure = dSqure * iNo;
    return dSqure;
}

int main()
{   
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Squre Feet :");
    scanf("%d",&iValue);

    dRet = SqureMeter(iValue);

    printf("Squre Feet is :%.4lf\n",dRet);


    return 0;
}