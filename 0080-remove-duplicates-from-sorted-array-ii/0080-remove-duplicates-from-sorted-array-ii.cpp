class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int count=1;
        int num=nums[0];
        int j=1;
       for(int i=1;i<nums.size();i++)
       {
        if(num==nums[i])
        {
            count++;
            if(count>2)
            continue;
            else
            {
                nums[j]=nums[i];
                j++;
            }   
        }else
        {
            num=nums[i];
            nums[j]=nums[i];
            count=1,j++;
        }
       } 
       return j;
    }
};