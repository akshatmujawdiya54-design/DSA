class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap <Integer,Integer>  ans=new HashMap<>();
        for(int i=0;i<nums.length;i++)
        {
            int find=target-nums[i];
            if(ans.containsKey(find)){
                return new int[]{ans.get(find),i};
            }
            ans.put(nums[i],i);
        }
        return new int[]{};
    }
}