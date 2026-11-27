/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
         vector<int> result;
        queue<TreeNode*> x;
        if(root==NULL){
            return result;
        }
        x.push(root);
        while(!x.empty()){
            int size=x.size();
            for(int i=0;i<size;i++){
                TreeNode* temp=root;
                temp=x.front();
                x.pop();
                if(i==size-1){
                    result.push_back(temp->val);
                }
                if(temp->left!=NULL){
                    x.push(temp->left);
                }
                if(temp->right!=NULL){
                    x.push(temp->right);
                }
            }
        }
        return result;
    }
};