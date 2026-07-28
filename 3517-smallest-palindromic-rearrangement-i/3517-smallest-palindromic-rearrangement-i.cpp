class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.length() ==1) return s;
        vector<int>freq(26,0);
        for(char ch: s)
        {
            freq[ch-'a']++;
        }
        char middlechar='\0';
        string firsthalf="";
        for(int i=0;i<26;i++)
        {
            if(freq[i]%2!=0)
            {
                middlechar=(char)('a'+i);
                freq[i]--;
            }
        }
        for(int i=0;i<26;i++)
        {
          int count=freq[i]/2;
            firsthalf.append(count,(char)('a'+i));
        }
        string secondhalf=firsthalf;
        reverse(secondhalf.begin(),secondhalf.end());
        if(middlechar!='\0')
        return firsthalf+middlechar+secondhalf;
        else
        return firsthalf+secondhalf;
    }
};