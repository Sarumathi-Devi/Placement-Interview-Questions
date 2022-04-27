/*
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]'

Constraint : without sorting 
*/

inline void swap  ( int *num1, int *num2 )
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void sortColors(vector<int>& nums) 
{
    int low, mid, high;
    low = mid = 0;
    high = nums.size()-1;

    while ( mid <= high )
    {
        if ( nums[mid] == 0 )
        {
            swap ( &nums[low], &nums[mid] );
            low += 1;
            mid += 1;
        }
        else if ( nums[mid] == 1 ) mid += 1;
        else 
        {
            swap ( &nums[high], &nums[mid] );
            high -= 1;
        }
    }
}

int main()
{
    vector < int > nums = { 0,1,2,1,2,0,2,1 };
    sortColors ( nums );
  
    for ( const int &x : nums )
      cout << x << " ";
  
    return 0;
}
