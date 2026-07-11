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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* left_prev=NULL;
        ListNode* current=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;

        if(head==NULL || left==right){
            return head;
        }
        int pos=1;
        while(pos<left){
            left_prev=current;
            current=current->next;
            pos++;
        }
         ListNode* leftnode=current;
        for(int i=0;i<right-left+1;i++){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        leftnode->next=current;
        if(left_prev != NULL)
            left_prev->next = prev;
        else
            head = prev;
        return head;

}};