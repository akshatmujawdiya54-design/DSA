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
    void reorderList(ListNode* head) {
       stack<ListNode *>ans;
       
       ListNode *s=head;
       ListNode *f=head;

       while(f!=NULL && f->next!=NULL)
       {
        s=s->next;
        f=f->next->next;
       }

       while(s!=NULL)
       {
        ans.push(s);
        s=s->next;
       }

       while(!ans.empty())
       {

        ListNode *temp=head->next;
        ListNode *top=ans.top();
        ans.pop();

        if(head==top)
        break;

        head->next=top;
        top->next=temp;
        head=temp;

       }
        head->next=NULL;
    }
};