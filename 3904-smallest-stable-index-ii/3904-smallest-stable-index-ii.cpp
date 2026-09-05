class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
    int n=nums.size();
    vector<int>minsufix(n);
     minsufix[n-1]=nums[n-1];
    for(int i=n-2;i>=0;i--)
    {
        minsufix[i]=min(nums[i],minsufix[i+1]);
    }

    int maxprefix=nums[0];
    for(int i=0;i<n;i++)
    {
        maxprefix=max(nums[i],maxprefix);
        if(maxprefix-minsufix[i]<=k)
            return i;
    }
    return -1;
    }
};