class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int start = 1;
        int end = 0;
        for (int x : piles) {
            end = Math.max(x, end);
        }
        int k = Integer.MAX_VALUE;
        while (start <= end) {
           long ans = 0;
            int mid = start + (end - start) / 2;
            for (int pile : piles) {
                ans += ((long)pile + mid - 1) / mid;
            }
            if (ans <= h) {
                k=Math.min(k,mid);
                end = mid - 1;
            } else
                start = mid + 1;
        }
        return k;
    }
}