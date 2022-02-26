#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int rem;
    
    const char *words[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    
    while ( num != 0 ) 
    {
        cout << words[num%10] << endl;
        num /= 10;
    }
    
    return 0;
}
