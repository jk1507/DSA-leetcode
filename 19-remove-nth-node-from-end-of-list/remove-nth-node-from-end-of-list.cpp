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
        ListNode *temp=head;
        int count=0;
        if(head==NULL) return head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int pos=count-n+1;
        if(pos==1) return head->next;
        int x=1;
        ListNode *temp1=head;
        ListNode *prev=NULL;
        while(temp1!=NULL){
            if(x==pos){
                prev->next=temp1->next;
                break;
            }
            prev=temp1;
            temp1=temp1->next;
            x++;
        }
        return head;
    }
};