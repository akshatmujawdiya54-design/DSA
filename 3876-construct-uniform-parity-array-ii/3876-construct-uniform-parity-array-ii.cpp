class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mineven=INT_MAX;
        int minodd=INT_MAX;
       for(int i=0;i<nums1.size();i++)
       {
        if(nums1[i]%2!=0)
        {
            if(minodd>nums1[i])
                minodd=nums1[i];
        }
        else
        {
            if(mineven>nums1[i])
                mineven=nums1[i];
        }
       }
       if (minodd==INT_MAX) return true;
       return minodd<mineven;
    }
};