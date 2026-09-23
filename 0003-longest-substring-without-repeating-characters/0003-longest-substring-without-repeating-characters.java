class Solution {
    public int lengthOfLongestSubstring(String s) {
        Set <Character> set=new HashSet<>();
        int maxlen=0;
        int left=0;
        int right=0;
        while(right<s.length())
        {
            char ch=s.charAt(right);
            while(set.contains(ch))
            {
                set.remove(s.charAt(left));
                left++;
            }
            set.add(ch);
            maxlen=Math.max(maxlen,right-left+1);
            right++;
        }
    return maxlen;
    }
}