/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        //int a[];
        int k=0;
        ListNode p=head;
        while(p!=null)
        {
            k++;
            p=p.next;

         }
        int s=k-n+1;
        if(s==1)
        {
            p=head.next;
            
            head=p;
         }
        else{
        p=head;
        ListNode q=head;
        for(int i=1;i<s;i++)
        {
            q=p;
            p=p.next;
        }
        q.next=p.next;
            
        }
       return head;
    }
}