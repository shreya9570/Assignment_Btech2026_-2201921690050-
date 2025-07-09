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
 /*
class Solution {
public:
//he variable k is passed by reference (int& k), ensuring that
// changes made to k during the traversal persist across recursive calls.
    int kthSmallest(TreeNode* root, int &k) {
        // Base case: if the root is NULL, return -1
        if (root == NULL) {
            return -1;
        }
        
        // Left subtree traversal
        int leftans = kthSmallest(root->left, k);
        if (leftans != -1) {
            return leftans;  // If found in the left subtree, return the answer
        }
        
        // Current node processing
        k--;  // Decrement k after visiting the current node
        if (k == 0) {
            return root->val;  // If we have found the kth smallest element
        }
        
        // Right subtree traversal
        return kthSmallest(root->right, k);
    }
};
*/





class Solution {
public:
int kthSmallest(TreeNode* root, int &k) {
    if(root == NULL)
    return -1 ;
    int leftans = kthSmallest(root ->left , k);
        if(leftans != -1){
            return leftans ;
        }
        k--;
        if(k == 0 )
        return root ->val;
         return kthSmallest(root->right, k);
    } 
};
    
    
    







