#include<iostream>
using namespace std;

void Display(int No)
{
    static int i = 1;

    if(i <= No)
    {
        cout << i <<"\t";
        i++;
        Display(No);
    }
    
}

int main()
{
    int iValue = 0;

    cout << "Enter the Number :";
    cin >> iValue;

    Display(iValue);

    return 0;
}