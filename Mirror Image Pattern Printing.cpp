#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int i,k;
    int j = num-1;
    int var1 = 1;
    int var2 = 1;
    
    i = 0;
    while ( i < num-1 )
    {
        j = num-1-i;
        while ( j > 1 )
        {
            cout << " ";
            j--;
        }
        k = 1;
        while ( k <= var1 )
        {
            cout << abs(k-var2);
            k++;
        }
        cout << endl;
        var1 += 2;
        var2 += 1;
        i++;
    }
    return 0;
}
