class Solution {
    public int maxDepth(String s) {
        int maxlen=0;
        int max=0;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='(')
            {
                max++;
                maxlen=Math.max(max,maxlen);
            }else if(s.charAt(i)==')')
            {
                max--;
            }
            else
             continue;
        }
        return maxlen;
    }
}