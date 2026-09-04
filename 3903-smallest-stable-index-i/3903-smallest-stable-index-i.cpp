class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>sufixmin(n);
        sufixmin[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            sufixmin[i]=min(nums[i],sufixmin[i+1]);
        }
        int maxprefix=nums[0];
        for(int i=0;i<n;i++)
        {
            maxprefix=max(maxprefix,nums[i]);
            if(maxprefix-sufixmin[i]<=k)
                return i;
        }
        return -1;
    }
};