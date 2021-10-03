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
    ListNode* reverseList(ListNode* head) {
        
        if(head == NULL || head->next == NULL) return head;
        
        ListNode* p = NULL;
        ListNode* q = head;
        ListNode* r = head->next;
        
        while(q != NULL){
            
            q->next = p;
            p = q;
            q = r;
            if(r) r = r->next;
            
        }
        
        return p;
        
    }
};