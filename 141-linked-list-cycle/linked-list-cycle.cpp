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
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        ListNode *temp=head;
        unordered_map<ListNode*,int> x;
        while(temp!=NULL ){ 
            if(x.find(temp)!=x.end()) return true;
            x[temp]=1;
            temp=temp->next;
        }
        return false;
    }
};