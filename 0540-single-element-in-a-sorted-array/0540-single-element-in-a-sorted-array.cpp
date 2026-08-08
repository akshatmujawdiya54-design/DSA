class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        int ans;
        if(nums.size()==1) return nums[0];
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(mid==0) return nums[0];
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
            {
             ans=nums[mid];
             break;
            }
            else if((nums[mid]==nums[mid-1] && mid%2==0) || (nums[mid]==nums[mid+1] && mid%2!=0))
                end=mid-1;
            else
                start=mid+1;
                ans=nums[mid];
           
        }
        return ans;
    }
};