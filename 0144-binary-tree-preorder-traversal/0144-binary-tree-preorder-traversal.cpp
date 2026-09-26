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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>preorder;
        stack<TreeNode*>st;
        if(root==nullptr)return preorder;
        st.push(root);
        while(st.size()>0){
            TreeNode* curr=st.top();
             st.pop();
             preorder.push_back(curr->val);
             if(curr->right!=nullptr)st.push(curr->right);
            if(curr->left!=nullptr)st.push(curr->left);
           
        
        }
        return preorder;
    }
};