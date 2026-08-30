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
    int widthOfBinaryTree(TreeNode* root) {
        typedef unsigned long long ll;
        ll maxwidth=0;
        queue<pair<TreeNode*,ll>>q;
        q.push({root,0});
        while(q.size()>0){
            ll left=q.front().second;
            ll right=q.back().second;
            maxwidth=max(maxwidth,right-left+1);
            ll n=q.size();
            while(n--){
                TreeNode* curr=q.front().first;
                ll idx=q.front().second;
                q.pop();
                if(curr->left!=NULL)q.push({curr->left,2*idx+1});
                if(curr->right!=NULL)q.push({curr->right,2*idx+2});
            }
        }
        return maxwidth;
    }
};