#include<stdio.h>

double FHtoCs(float fTemp)
{
    float celsius = 0.0;

    celsius = ((fTemp - 32) * (5.0/9.0));

    return celsius;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit :");
    scanf("%f",&fValue);

    dRet = FHtoCs(fValue);

    printf("OUTPUT :%f\n",dRet);

    return 0;
}