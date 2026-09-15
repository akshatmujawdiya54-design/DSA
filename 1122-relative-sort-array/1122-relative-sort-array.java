class Solution {
    public int[] relativeSortArray(int[] arr1, int[] arr2) {
        int [] arr3=new int[1001];
        for(int i=0;i<arr1.length;i++)
        {
            arr3[arr1[i]]++;
        }
        int [] ans=new int[arr1.length];
        int j=0;
        for(int i=0;i<arr2.length;i++)
        {
            while(arr3[arr2[i]]>0)
            {
                ans[j]=arr2[i];
                j++;
                arr3[arr2[i]]--;
            }
        }
        for(int i=0;i<1001;i++)
        {
            while(arr3[i]>0)
            {
                ans[j]=i;
                j++;
                arr3[i]--;
            }
        }
        return ans;
    }
}