class Solution {
    public int reverseDegree(String s) {
        int num;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            ans=ans+(26-(s.charAt(i)-'a'))*(i+1);
        }
        return ans;
    }
}