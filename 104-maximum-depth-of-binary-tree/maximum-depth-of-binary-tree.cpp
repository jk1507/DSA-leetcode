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
    int depth(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=depth(root->left);
        int right=depth(root->right);
        return 1+max(left,right);
    }
    int maxDepth(TreeNode* root) {
        int x=depth(root);
        return x;
        /*queue<TreeNode*> x;
        int depth=0;
        if(root==NULL){
            return 0;
        }
        x.push(root);
        while(!x.empty()){
            int size=x.size();
            depth++;
            for(int i=0;i<size;i++){
                TreeNode* temp=x.front();
                 x.pop();
                if(temp->left!=NULL){
                    x.push(temp->left);
                }
                if(temp->right!=NULL){
                    x.push(temp->right);
                }
            }
        }
        return depth;
        */
    }
};