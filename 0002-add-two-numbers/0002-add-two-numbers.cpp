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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* tail = NULL;
        int carry = 0;
        while (l1 != NULL && l2 != NULL) {
            int sum = l1->val + l2->val + carry;
            if (sum > 9)
                carry = 1;
            else
                carry = 0;

            if (head == NULL) {
                head = new ListNode(sum % 10);
                tail = head;
            } else {
                tail->next = new ListNode(sum % 10);
                tail = tail->next;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1 != NULL) {
           int sum = l1->val + carry;
            if (sum > 9)
                carry = 1;
            else
                carry = 0;
            tail->next = new ListNode(sum % 10);
            tail = tail->next;
            l1 =l1->next;
        }
         while (l2 != NULL) {
          int  sum = l2->val + carry;
            if (sum > 9)
                carry = 1;
            else
                carry = 0;
            tail->next = new ListNode(sum % 10);
            tail = tail->next;
            l2 =l2->next;
        }
        if(carry==1)
        {
            tail->next=new ListNode(carry);
        }
        return head;
    }
};