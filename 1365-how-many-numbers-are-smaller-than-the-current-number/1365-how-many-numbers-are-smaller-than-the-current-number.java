class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int n=nums.length;
        int[] arr=nums.clone();
        int [] ans=new int[n];
        Arrays.sort(arr);
        for(int i=0;i<n;i++)
        {
            int start=0;
            int end=n-1;
            while(start<=end)
            {
                int mid=start+(end-start)/2;
                if(arr[mid]==nums[i])
                    {
                        ans[i]=mid;
                        end=mid-1;
                    }
                else if(arr[mid]>nums[i])
                {
                    end=mid-1;
                }
                else
                    start=mid+1;
            }
        }
    return ans;
    }
}