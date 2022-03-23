#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1;
    int num2;
    cout << "Number 1 : ";  cin >> num1;
    cout << "Number 2 : ";  cin >> num2;
    int range;
    cout << "Range : "; cin >> range;
    int temp;
    
    while ( num1 < range )
    {
        cout << num1 << " ";
        temp = num1;
        num1 = num2;
        num2 = num2+temp;
    }
    return 0;
}

