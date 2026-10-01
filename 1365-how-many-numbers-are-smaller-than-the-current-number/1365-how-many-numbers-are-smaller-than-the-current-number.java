class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
       int n=nums.length;
       int[] count=new int[102];
       for(int x:nums) count[x+1]++;
       for(int i=1;i<102;i++)
        count[i]+=count[i-1];
        for(int i=0;i<n;i++)
        {
            nums[i]=count[nums[i]];
        }
        return nums;
    }
}