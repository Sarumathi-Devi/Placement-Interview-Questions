/*
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

Input: nums = [], target = 0
Output: [-1,-1]

*/


#include <bits/stdc++.h>
using namespace std;

int binarySearch( vector<int>& nums, int target, bool to_right )
{
    int start = 0;
    int mid;
    int end = nums.size();
    int range = -1;

    while ( start <= end )
    {
        mid = (start+end)/2;

        if ( nums[mid] > target ) end = mid - 1;
        else if ( nums[mid] < target )  start = mid + 1;
        else 
        {
            range = mid;
            if ( nums[mid] == target ) 
            {
                if ( to_right )
                    start = mid+1;
                else 
                    end = mid-1;
            }
        }
    } 
    return range;
}

int main()
{
    vector<int> searchRange(vector<int>& nums, int target)
    {
        if ( nums.size() == 0 ) return {-1,-1};
        if ( nums.size() == 1 )
        {
            if( nums[0] == target ) return {0,0};
            else return {-1,-1};
        }                    
        vector <int> res;
    
        res.push_back( binarySearch( nums, target, false ) );
        res.push_back( binarySearch( nums, target, true ) );*/
        
        // Another approach using inbuilt function     
        
//         if(!binary_search(nums.begin(), nums.end(), target))
//             return {-1, -1};
//         int start = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
//         int end = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
//         return {start, end};
         
          for ( auto x : res )
            cout << x << " ";
        
         return 0;
}

