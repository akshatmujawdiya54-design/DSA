class Solution {
    public int firstStableIndex(int[] nums, int k) {
        int n=nums.length;
        int [] sufixmin=new int[n];
        sufixmin[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            sufixmin[i]=Math.min(sufixmin[i+1],nums[i]);
        }
        int maxprefix=nums[0];
        for(int i=0;i<n;i++)
        {
            maxprefix=Math.max(maxprefix,nums[i]);
           int score=maxprefix - sufixmin[i];
           if(score<=k)
            return i;
        }
        return -1;
    }
}