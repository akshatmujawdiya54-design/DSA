class Solution {
    public int firstUniqChar(String s) {
        HashMap<Character,Integer> first=new HashMap<>();
        for(char x:s.toCharArray())
        {
            first.put(x,first.getOrDefault(x,0)+1);
        }
        for(int i=0;i<s.length();i++)
        {
            if(first.get(s.charAt(i))==1)
                return i;
        }
        return -1;

    }
}