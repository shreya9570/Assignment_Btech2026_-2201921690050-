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
    // Helper to build tree recursively
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,
                    int inStart, int inEnd,
                    int& preIndex, unordered_map<int, int>& inMap) {
        if (inStart > inEnd) return NULL;

        int rootVal = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootVal);

        int inIndex = inMap[rootVal];

        root->left = build(preorder, inorder, inStart, inIndex - 1, preIndex, inMap);
        root->right = build(preorder, inorder, inIndex + 1, inEnd, preIndex, inMap);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> inMap;
        for (int i = 0; i < inorder.size(); ++i) {
            inMap[inorder[i]] = i;
        }
        int preIndex = 0;
        return build(preorder, inorder, 0, inorder.size() - 1, preIndex, inMap);
    }
};
