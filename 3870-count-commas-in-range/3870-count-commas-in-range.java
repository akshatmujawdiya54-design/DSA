class Solution {
    public int countCommas(int n) {
        int ans=0;
        if(n>0 && n<1000)
            return 0;
        else
            ans=n-999;
        return ans;
    }
}