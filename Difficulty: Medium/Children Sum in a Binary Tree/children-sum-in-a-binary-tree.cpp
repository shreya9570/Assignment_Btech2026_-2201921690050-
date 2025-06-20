/*Complete the function below

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){80
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
public:
    bool check(Node* root) {
        // Base case: NULL or leaf node
        if (!root || (!root->left && !root->right))
            return true;

        int sum = 0;

        if (root->left)
            sum += root->left->data;

        if (root->right)
            sum += root->right->data;

        // Check if current node follows the sum property
        bool current = (root->data == sum);

        // Recursively check left and right subtrees
        bool leftans = check(root->left);
        bool rightans = check(root->right);

        return current && leftans && rightans;
    }

    int isSumProperty(Node* root) {
        return check(root);
    }
};
