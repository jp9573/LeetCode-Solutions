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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *slow=head,*fast=head,*curr=head;
        while(n>=1)
        {
            fast=fast->next;
            n--;
        }
        if(fast==nullptr)
        {
            head=curr->next;
            delete(curr);
            return head;
        }
        while(fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next;
        }
        curr=slow->next;
        slow->next=curr->next;
        delete(curr);
        return head;
    }
};