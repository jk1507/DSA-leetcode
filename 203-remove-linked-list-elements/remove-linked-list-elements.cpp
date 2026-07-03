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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val==val){
            head=head->next;
        }
        if(head==NULL){
            return NULL;
        }
        ListNode* temp=head;
        ListNode* dummy=temp->next;
        while(dummy!=NULL){
            if(dummy->val==val){
                temp->next=dummy->next;
                dummy=temp->next;
            }
            else{
                dummy=dummy->next;
                temp=temp->next;
            }
        }
        return head;
    }
};