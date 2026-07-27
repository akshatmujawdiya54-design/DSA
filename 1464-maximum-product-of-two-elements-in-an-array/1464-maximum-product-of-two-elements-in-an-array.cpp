class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int first=0,second=0;
      int idx1=-1,idx2=-1;
        for(int i=0;i<nums.size();i++)
        {
            if (nums[i] >= first) {
                second = first;
                idx2=idx1;
                first = nums[i];
                idx1=i;
            } else if (nums[i] > second) {
                second = nums[i];
                idx2=i;
            }
        }
        return (nums[idx1]-1)*(nums[idx2]-1);
    }
};