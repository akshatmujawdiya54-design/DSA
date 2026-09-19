class Solution {
    public int[] dailyTemperatures(int[] temp) {
        Stack<Integer>st=new Stack<>();
        int[] ans = new int[temp.length];
        for(int i=temp.length-1; i>=0; i--)
        {
            if(!st.isEmpty())
            {
                if(temp[st.peek()]>temp[i])
                {
                    ans[i]=st.peek()-i;
                    st.push(i);
                }
                else
                {
                    while(!st.empty())
                    {
                        if(temp[st.peek()]<=temp[i])
                        st.pop();
                        else
                        {
                            ans[i]=st.peek()-i;
                            st.push(i);
                            break;
                        }
                    }
                    st.push(i);
                }
            }
            else
            {
                st.push(i);
            }
        }
        return ans;

    }
}