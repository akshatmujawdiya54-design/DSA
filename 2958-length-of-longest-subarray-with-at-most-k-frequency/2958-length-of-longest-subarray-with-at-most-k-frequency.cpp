class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
     unordered_map<int,int>freq;
    int  maxlen=1;
      int i=0;
      for(int j=0;j<nums.size();j++)
      {
        freq[nums[j]]++;
        while(freq[nums[j]]>k)
        {
            freq[nums[i]]--;
            i++;
        }
        maxlen=max(maxlen,j-i+1);
      }
     
      return maxlen;
    }
};