#include<stdio.h>

double RectArea(float fWidth, float fHight)
{
    float Area = 0.0f;
    Area = fWidth * fHight;

    return Area;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enetr Width :");
    scanf("%f",&fValue1);

    printf("Enter Height :");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Rectangale from User %.3lf\n",dRet);



    return 0;
}