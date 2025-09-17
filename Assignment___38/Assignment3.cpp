#include<iostream>
using namespace std;

template <class T>
T Large(T No1, T No2, T No3)
{
    T LargValue = No1;

    if (No2 > LargValue)
    {
        LargValue = No2;
    }
    if (No3 > LargValue)
    {
        LargValue = No3;
    }

    return LargValue;
}

int main()
{
    int iRet = Large(10, 20, 15);
    cout << "Largest of integers: " << iRet << "\n";

    float fRet = Large(11.5f, 20.1f, 15.3f);
    cout << "Largest of floats: " << fRet << "\n";

    double dRet = Large(12.25, 5.75, 18.5);
    cout << "Largest of doubles: " << dRet << "\n";

    char cRet = Large('a', 'z', 'm');
    cout << "Largest of chars: " << cRet << "\n";

    return 0;
}