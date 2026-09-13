class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        ArrayList<Integer> appearstwice=new ArrayList<>();
        HashMap<Integer,Integer> ans=new HashMap<>();
        for(int i=0;i<nums.length;i++)
        {
            int index=Math.abs(nums[i])-1;
            if(nums[index]<0)
                appearstwice.add(index+1);
            else
                nums[index]=-nums[index];
        }
        return appearstwice;
    }
}