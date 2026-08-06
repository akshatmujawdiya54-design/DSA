class Solution {
public:
    int smallestNumber(int n, int t) {
      while(true){
       int ans=1;
       int num=n;
       while(num) 
       {
            ans*=num%10;
            if(ans==0) break;
            num/=10;
       }
      if(ans%t==0)
       return n;
       n++;
      }
    }
};