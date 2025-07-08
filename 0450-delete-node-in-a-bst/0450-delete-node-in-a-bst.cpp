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
    TreeNode* findmin(TreeNode* root) {
        while (root->left != NULL) {
            root = root->left;
        }
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == NULL)
            return NULL;

        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        } 
        else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        } 
        else {
            // Node to delete found

            // Case 1: No children
            if (root->left == NULL && root->right == NULL) {
                delete root;
                return NULL;
            }

            // Case 2: Only right child
            if (root->left == NULL && root->right != NULL) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            // Case 3: Only left child
            if (root->right == NULL && root->left != NULL) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            // Case 4: Two children
            TreeNode* Minnode = findmin(root->right);
            root->val = Minnode->val;
            root->right = deleteNode(root->right, Minnode->val);
        }

        return root;
    }
};
