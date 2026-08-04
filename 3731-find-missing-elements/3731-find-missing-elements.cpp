class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
     vector<int>ans;
      int maximum=INT_MIN,minimum=INT_MAX;
      for(int arr:nums)
      {
        maximum=max(maximum,arr);
        minimum=min(minimum,arr);
      }
      int j=0;
      sort(nums.begin(),nums.end());
      for(int i=minimum;i<=maximum;i++)
      {
        if(j<nums.size() && nums[j]==i )
        j++;
        else
        ans.push_back(i);
      }
      return ans;
    }
};