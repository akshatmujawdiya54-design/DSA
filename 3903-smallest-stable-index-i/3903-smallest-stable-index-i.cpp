class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int stableidx=-1;
        for(int i=0;i<nums.size();i++)
        {
            int mx = *max_element(nums.begin(), nums.begin()+i+1);
            int mn=*min_element(nums.begin()+i,nums.end());
            if(mx-mn<=k)
            {
                stableidx=i;
                break;
            }
        }
    return stableidx;
    }
};