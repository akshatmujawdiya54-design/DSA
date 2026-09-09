class Solution {
    public long countCommas(long n) {
        long ans=0;
        if(n>0 && n<1000)
        {
            ans=0;
        }
        if(n>=1000 && n<=999999)
        {
            ans+=n-999;
        }
        else if(n>=1000000 && n<=999999999)
        {
            ans+=2*(n-999999);
            ans+=999000;
        }
        else if((n>=1000000000L) && (n<=999999999999L))
        {
            ans+=3*(n-999999999L);
            ans+=2*999000000L;
            ans+=999000L;
        }
       else if(n>=1000000000000L && n<=999999999999999L)
        {
            ans+=4*(n-999999999999L);
            ans+=3*999000000000L;
            ans+=2*999000000L;
            ans+=999000L;
        }
       else if(n==1000000000000000L)
        {
            ans+=5;
            ans+=4*999000000000000L;
            ans+=3*999000000000L;
            ans+=2*999000000L;
            ans+=999000L;
        }
        return ans;
    }
}