class Solution {
    public List<Integer> findLonely(int[] nums) {
     TreeMap<Integer, Integer> map = new TreeMap<>();
        for (int x : nums) {
            map.put(x, map.getOrDefault(x, 0) + 1);
        }
        ArrayList<Integer> list=new ArrayList<>();
        for(int x:nums)
        {
            if(map.get(x)==1 && map.getOrDefault(x-1,0)==0 && map.getOrDefault(x+1,0)==0)
            {
                list.add(x);
            }
        }
        return list;
    }
}