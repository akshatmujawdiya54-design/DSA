class Solution {
    public int sumOfSquares(int[] nums) {
        int n=nums.length;
        int sqrsum=0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
                sqrsum+=nums[i-1]*nums[i-1];
        }
        return sqrsum;
    }
}