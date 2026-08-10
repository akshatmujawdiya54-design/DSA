class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2 == "0")
        return "0";
        int n=num1.size();
        int m=num2.size();
        vector<int>result(n+m,0);
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                int a=num1[i]-'0';
                int b=num2[j]-'0';

                int prod=a*b;
                int pos2=i+j+1;
                int pos1=i+j;

                result[pos2]+=prod;
                result[pos1]+=result[pos2]/10;
                result[pos2]%=10;
            }
        }
        string ans="";
        int i=0;
        while(i<result.size() && result[i]==0)
        i++;
        while(i<result.size())
        {
            ans+=char(result[i]+'0');
            i++;
        }
        return ans;
    }
};