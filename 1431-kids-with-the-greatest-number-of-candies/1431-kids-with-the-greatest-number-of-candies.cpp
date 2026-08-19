class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int maxnum=*max_element(candies.begin(),candies.end());
        for( int x: candies)
        {
           if(extraCandies+x>=maxnum)
            ans.push_back(true);
           else
           ans.push_back(false);
        }
        return ans;
    }
};