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
class BSTIterator {
    stack<TreeNode*> st; // stack of TreeNode*, not int

    void pushleft(TreeNode* node) {
        while (node) {
            st.push(node);        // push node, not node->val
            node = node->left;    // keep going to leftmost
        }
    }

public:
    BSTIterator(TreeNode* root) {
        pushleft(root); // initialize stack with all left children
    }

    int next() {
        TreeNode* curr = st.top(); // top is next smallest
        st.pop();

        // if current node has right child, push all lefts from right
        if (curr->right) {
            pushleft(curr->right);
        }

        return curr->val; // return the smallest element
    }

    bool hasNext() {
        return !st.empty();
    }
};


/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */