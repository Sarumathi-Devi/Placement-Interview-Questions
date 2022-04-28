class Solution {
public:
    int sumOfUnique(vector<int>& nums)
    {
        int sum,ctr;
        int hash[101] = {0};
        
        ctr = 0;
        while ( ctr < nums.size() )
            hash[nums[ctr++]] += 1;
        
        ctr = sum = 0;
        while ( ctr < 101 )
        {
            if ( hash[ctr] == 1 ) sum += ctr;
            ctr += 1;
        }       
        return sum;
    }
};
