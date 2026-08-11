class Solution {
public:
    int finddays(vector<int>& weights,int cap)
    {
        int days=1,load=0;
        for(int i=0;i<weights.size();i++)
        {
            if(weights[i]+load>cap)
            {
                days+=1;
                load=weights[i];
            }
            else
            {
                load+=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int high=0;
        int low=INT_MIN;
        for(int i=0;i<weights.size();i++)
        {
            if(weights[i]>=low)
                low=weights[i];
            high+=weights[i];
        }
        while(low<=high)
        {
            int mid=(low+high)/2;
            int daysreq=finddays(weights,mid);
            if(daysreq<=days)
            {
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return low;
    }
};