// Problem: https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/

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
    
    void dfs(TreeNode *cur, int &udhar) {
        if (cur == NULL) return;
        
        dfs(cur->right, udhar);
        
        cur->val = udhar+cur->val;
        udhar = cur->val;
        
        dfs(cur->left, udhar);
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        int udhar = 0;
        dfs(root, udhar);
        
        return root;
    }
};
