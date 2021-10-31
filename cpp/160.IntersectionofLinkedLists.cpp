/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
       ListNode* temp = headA; ListNode* temp2 = headB; int a=0; int b=0;
        
         if (temp==NULL  ||  temp2==NULL) 
         return NULL; 
        
        while (temp){a++; temp=temp->next;}
        while(temp2){b++; temp2= temp2->next;}
        
        temp = headA; temp2 = headB;
        int d= abs(a-b);
        
        if (a>b)
        {
            for (int i=0;i<d;i++)
                temp = temp->next;
        }
        
        else if (b>a)
        {
            for(int i=0;i<d;i++)
                temp2=temp2->next;
        }
        
        while (temp || temp2)
        {
            if (temp==temp2) return temp;
            
            temp = temp->next; temp2=temp2->next;
        }
        
        return temp;
    }
    
};
