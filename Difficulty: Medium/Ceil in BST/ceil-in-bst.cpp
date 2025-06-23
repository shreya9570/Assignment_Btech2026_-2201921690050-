/* struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};  */

int findCeil(Node* root, int input) {
    int ceil = -1; // Initialize ceil as -1 (or any value indicating "not found")

    while (root) {
        if (root->data == input) {
            ceil = root->data;
            return ceil; // Found exact match
        }
        if (root->data > input) {
            ceil = root->data; // Possible ceil, move to left for smaller possible ceil
            root = root->left;
        } else {
            root = root->right; // Move right to find larger value
        }
    }

    return ceil;
}
