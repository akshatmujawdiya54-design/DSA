class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       int n=nums.size();
        int pos[n/2];
        int neg[n/2];
        int j=0,k=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>= 0)
            {
            pos[j]=nums[i];
            j++;
            }
            else
            {
            neg[k]=nums[i];
            k++;
            }
        }
        j=0,k=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
            nums[i]=pos[j];
            j++;
            }
            else
            {
                nums[i]=neg[k];
                k++;
            }
        }
        return nums;
    }
};