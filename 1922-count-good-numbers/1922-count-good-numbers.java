class Solution {
    private static final long MOD=1_000_000_007L;

    private long power(long base,long exp)
    {
        long res=1;
        base%=MOD;

        while(exp>0)
        {
            if(exp%2==1)
            {
                res=(res*base)%MOD;
            }
            base=(base*base)%MOD;
            exp/=2;
        }
        return res;
    }
    public int countGoodNumbers(long n) {
        long evenposition=(n+1)/2;
        long oddposition=n/2;

        long wayseven =power(5,evenposition);
        long waysodd=power(4,oddposition);
        return(int)((wayseven*waysodd)%MOD);
    }
}