/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
       stack<int>ans;
       ListNode *temp=head;
       while(temp!=NULL)
       {
        ans.push(temp->val);
        temp=temp->next;
       } 
        int mul=1,ans1=0;
        while(ans.size()!=0)
        {
            ans1=ans1+(mul*ans.top());
            ans.pop();
            mul*=2;
        }
        return ans1;
    }
};