#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    int num;
    cin >>  num;
    
    int ctr;
    int idx;
    
    ctr = 0;
    while ( ctr < num )
    {
        idx = 0;
        while ( idx++ < num-ctr-1  ) cout << setw(2) << " ";
        
        idx = 0;
        while ( idx < ctr ) cout << setw(2) << (ctr-(idx++)) ;
        cout << setw(2) << "0";
        idx = 0;
        while ( idx++ < ctr ) cout << setw(2) << idx ;
        
        ctr += 1;
        cout << endl;
    }
    
    
    return 0;
}
