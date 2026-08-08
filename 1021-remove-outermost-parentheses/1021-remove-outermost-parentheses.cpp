class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        int count=0;
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(count==0 && s[i]=='(')
            {
                count++;
            }else if(s[i]=='(' && count>=1)
            {
                ans=ans+s[i];
                count++;
            }
            else if(count>1 && s[i]==')')
            {
                ans=ans+s[i];
                count--;
            }else
            {
                if(s[i]==')' && count<=1)
                {
                    count--;
                }
            }

        }
        return ans;
    }
};