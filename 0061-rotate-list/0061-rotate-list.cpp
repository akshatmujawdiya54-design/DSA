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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* l1 = head;
        ListNode* l2 = NULL;
        while (head == NULL || head->next == NULL)
            return head;
        int count = 0;
        ListNode* temp = head;

        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        while (k%count!=0) {
            while (l1 != NULL && l1->next != NULL) {
                l2 = l1;
                l1 = l1->next;
            }
            l1->next = head;
            head = l1;
            l2->next = NULL;
            k--;
        }
        return head;
    }
};