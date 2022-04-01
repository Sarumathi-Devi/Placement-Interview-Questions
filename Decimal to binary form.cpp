// Input : 10
// Outout : 1010

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int num;
  cin >> num;
  int place = 1;
  int binaryform = 0;
  
  while ( num )
  {
     binaryform = ( (num%2)*place );
     place *= 10;
     num /= 2;
  }
  
  cout << "The binary form of the given number is " << binaryform;
  
  return 0; 
}
