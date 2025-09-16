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
    bool hasPathSum(TreeNode*root, int targetSum) {
        if(!root) return false ;
        if(!root -> left && !root -> right){
            if( root -> val == targetSum)
            return true;
            else false ;}

           return hasPathSum( root -> left , targetSum - root -> val)|| hasPathSum( root -> right , targetSum - root -> val);
        }
};
    
    
    
    
    
    
    
    
    








    
    
    /*  if( root == NULL){
        return false ;
      }  
     sum+= root->val;
     if( root ->left == NULL && root -> right == NULL){
        // i am currently standing a leaf node 
        // verify 
        if( sum == targetSum )
        return true ; 
        else 
        return false ; 
     }
    bool leftans = solve( root-> left , targetSum , sum );
    bool rightans = solve( root -> right , targetSum , sum );
    return leftans || rightans ; 
    }
     bool hasPathSum(TreeNode*root, int targetSum) {
        int sum = 0 ;
        bool ans = solve( root , targetSum , sum );
        return ans ;
     }
};*/