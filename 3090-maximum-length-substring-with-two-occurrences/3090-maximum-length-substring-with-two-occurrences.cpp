class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<char,int>freq;
        int maxlen=1;
        int i=0;
        for(int j=0;j<s.length();j++)
        {
            freq[s[j]]++;
            while(freq[s[j]]>2)
            {
                freq[s[i]]--;
                i++;
            }
            maxlen=max(maxlen,j-i+1);
        }
        return maxlen;
    }
};