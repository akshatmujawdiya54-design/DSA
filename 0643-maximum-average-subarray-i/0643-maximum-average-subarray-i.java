class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int maxsum=0;
        for(int i=0;i<k;i++)
        {
            maxsum+=nums[i];
        }
        int  max=maxsum;
        int left=0;
        int right=k;
       
        while(right<nums.length)
        {
            maxsum=maxsum-nums[left]+nums[right];
            max=Math.max(max,maxsum);
            right++;
            left++;
        }
        return max/(double)(k);
    }
}