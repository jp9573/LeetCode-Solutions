//Method 1 - Iterative
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
        int carry = 0;
        ListNode ans(0);
        ListNode *temp = &ans;
        while(carry || l1 || l2){
            carry+=(l1?l1->val:0)+(l2?l2->val:0);
            temp->next = new ListNode(carry%10);
            temp = temp->next;
            carry/=10;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        return ans.next;
    }
};

//Method 2 - Recursive
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
        if(!l1 && !l2) return NULL;
        int carry = (l1?l1->val:0)+(l2?l2->val:0);
        ListNode *newHead = new ListNode(carry%10), *next = l1?l1->next:NULL;
        carry/=10;
        if(next) next->val+=carry;
        else if(carry) next = new ListNode(carry);
        newHead->next = addTwoNumbers(l2?l2->next:NULL, next);
        return newHead;
    }
};