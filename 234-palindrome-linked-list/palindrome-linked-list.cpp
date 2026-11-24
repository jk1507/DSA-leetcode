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
    bool isPalindrome(ListNode* head) {
        /*ListNode* temp=head;
        vector<int> x;
        while(temp!=NULL){
            x.push_back(temp->val);
            temp=temp->next;
        }
        int first=0;
        int last=x.size()-1;
        while(first<=last){
            if(x[first]==x[last]){
                first++;
                last--;
                continue;
            }
            else{
                return false;
            }
        }
        return true;
        */
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL;
        ListNode* current =slow;
        while(current!=NULL){
            ListNode* y=current->next;
            current->next=prev;
            prev=current;
            current=y;
        }
        ListNode* first=head;
        ListNode* second=prev;
        while(second!=NULL){
            if(first->val!=second->val){
                return false;
            }
            first=first->next;
            second=second->next;
        }
        return true;
    }
};