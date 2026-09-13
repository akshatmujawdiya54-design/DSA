class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        HashMap<Integer,Integer> ans=new HashMap<>();
        ArrayList<Integer> appearstwice=new ArrayList<>();
        for(int x : nums)
            ans.put(x,ans.getOrDefault(x,0)+1);
        for(Integer x : ans.keySet()){
            if(ans.get(x)==2)
            {
                    appearstwice.add(x);
            }
        }
        return appearstwice;
    }
}