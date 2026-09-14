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
        ListNode *temp1=l1;
        ListNode *temp2=l2;
        int carry=0;
        vector<int> store;
        while(temp1!=NULL || temp2!=NULL){
            int sum=carry;
            if(temp1!=NULL){
                sum+=temp1->val;
                temp1=temp1->next;
            }
            if(temp2!=NULL){
                sum+=temp2->val;
                temp2=temp2->next;
            }
            if(sum<10){
                store.push_back(sum);
                carry=0;
            }
            else{
                int r=sum%10;
                int q=sum/10;
                store.push_back(r);
                carry=q;
            }
    }
    if(carry!=0)store.push_back(carry);
    ListNode *head=new ListNode(store[0]);
    ListNode *temp=head;
    for(int i=1;i<store.size();i++){
        temp->next= new ListNode(store[i]);
        temp=temp->next;
    }
    return head;
    }
};