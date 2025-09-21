#include<iostream>
using namespace std;

void Display(int No)
{
    static int i = 1;
    static int No1 = 5;

    if(i <= No)
    {
        cout << No1 <<"\t";
        No1--;
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