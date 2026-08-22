class Solution {
public:
    bool checkDivisibility(int n) {
        int num=n,sum=0,mul=1;
        while(num)
        {
            int rem=num%10;
            sum+=rem;
            mul*=rem;
            num/=10;
        }
        sum+=mul;
        if(n%sum==0)
        return true;
        return false;
    }
};