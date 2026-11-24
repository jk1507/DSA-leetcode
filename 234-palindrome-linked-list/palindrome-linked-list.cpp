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
        ListNode* temp=head;
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
    }
};