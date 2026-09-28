class Solution {
    public int maxDepth(String s) {
        int depth=0;
        int ans=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s.charAt(i)=='(')
            {
                ans++;
                depth=Math.max(ans,depth);
            }else if(s.charAt(i)==')')
                ans--;
        }
        return depth;
    }
}