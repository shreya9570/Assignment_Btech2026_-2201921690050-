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
int sumof( TreeNode*root , int digit ){
      if(!root) return 0 ;
      digit = digit * 10 + root -> val  ;
    if( !root -> left && !root -> right){
      return digit ;  
    }
   
    int sum = sumof( root -> left , digit)+sumof(root -> right , digit );
    return sum ;
}
    int sumNumbers(TreeNode* root) {
  return sumof( root , 0) ;
    }
};