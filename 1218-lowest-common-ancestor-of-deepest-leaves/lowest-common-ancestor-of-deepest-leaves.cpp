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
    unordered_map<int,int> mp;
    int maxD = 0;
    TreeNode* LCA(TreeNode* root){
   if(root == NULL || mp[root->val] == maxD){
            return root;
        }    
        TreeNode* l = LCA(root->left);
        TreeNode* r = LCA(root->right);

        if(r != NULL && l != NULL){
            return root;
        }
        if(l != NULL){
            return l;
        }
        return r;
    
    }
    void depth(TreeNode* root, int d){
         if(root == NULL){
            return;
        }
        maxD = max(maxD,d);
        mp[root->val] = d;
        depth(root->left,d+1);
        depth(root->right,d+1);
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {

        if(root == NULL){
            return NULL;
        }
        depth(root,0);
        return LCA(root);  
    }
};