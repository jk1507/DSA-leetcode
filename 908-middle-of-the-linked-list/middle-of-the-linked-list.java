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
    public ListNode middleNode(ListNode head) {
        ListNode temp=head;
        ListNode current=head;
        int count=0;
        int pos;
        while(temp!=null){
            count++;
            temp=temp.next;
        }
        if(count%2!=0){
             pos=(count/2);
        }
        else{
            pos=(count/2);
        }
        for(int i=1;i<=pos;i++){
            current=current.next;
            head=current;
        }
        return head;
    }
}