#include<iostream>
using namespace std;

template <class T>
T Large(T Arr[], int Size)
{
    T Large = Arr[0];
    for(int i = 0; i < Size; i++)
    {
        if(Large < Arr[i])
        {
            Large = Arr[i];
        } 
    }
    return Large;
}

int main()
{
    int Arr1[] = {10, 20, 30, 40, 50};
    int iSize = 5;

    int iMax = Large(Arr1, iSize);
    cout << "Large of integer array: " << iMax << "\n";
    
    float Arr2[] = {1.5, 2.5, 3.0};
    int fSize = 3;

    float fMax = Large(Arr2, fSize);
    cout << "Large of float array: " << fMax << "\n";

    return 0;
}