class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
      int totaltime=requests[0];
        for(int i=0;i<requests.size()-1;i++)
        {
            totaltime=totaltime+(abs(requests[i]-requests[i+1]));
        }
        return totaltime;
    }
};