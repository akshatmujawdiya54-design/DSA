class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
     int  ans=nums[0];
     int notzero=false;
     for(int i=1;i<nums.size();i++)
     {
        ans=ans^nums[i];
        if(nums[i]!=0)
           notzero=true;
     }
    if(ans!=0)
     return nums.size();
    else if(notzero==false)
        return 0;
return nums.size()-1;
    }
};