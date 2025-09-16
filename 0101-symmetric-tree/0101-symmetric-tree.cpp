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
    bool symmetric(TreeNode* t1, TreeNode* t2) {
        if (!t1 && !t2) return true;        // both NULL → symmetric
        if (!t1 || !t2) return false;       // one NULL, one not → not symmetric
        if (t1->val != t2->val) return false; // values differ → not symmetric
        
        return symmetric(t1->left, t2->right) &&
               symmetric(t1->right, t2->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (!root) return true;  // empty tree is symmetric
        return symmetric(root->left, root->right);
    }
};
