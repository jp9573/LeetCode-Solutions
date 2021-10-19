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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
    ListNode fake = new ListNode(0);
    ListNode p = fake;
 
    ListNode p1 = l1;
    ListNode p2 = l2;
 
    int carry = 0;
    while(p1!=null || p2!=null){
        int sum = carry;
        if(p1!=null){
            sum += p1.val;
            p1 = p1.next;
        }
 
        if(p2!=null){
            sum += p2.val;
            p2 = p2.next;
        }
 
        if(sum>9){
            carry=1;
            sum = sum-10;
        }else{
            carry = 0;
        }
 
        ListNode l = new ListNode(sum);
        p.next = l;
        p = p.next;
    }
 
    //don't forget check the carry value at the end
    if(carry > 0){
        ListNode l = new ListNode(carry);
        p.next = l;
    }
    return fake.next;
}
}