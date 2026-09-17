class Solution {
    public String largestOddNumber(String num) {
        int n=num.length();
        if((num.charAt(n-1)-'0')%2!=0)
            return String.valueOf(num);
        int j=-1;
        for(int i=0;i<n;i++)
        {
            if((num.charAt(i)-'0')%2!=0)
            {
                j=i;
            }
        }
        if(j==(-1))
        return "";
        
        return num.substring(0,j+1);
    }
}