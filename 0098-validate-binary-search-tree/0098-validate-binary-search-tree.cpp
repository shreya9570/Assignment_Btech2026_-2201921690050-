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
    bool solve( TreeNode* root , long long int lowerBound , long long int upperBound){
       if( root == NULL){
        return true ;
       } 
       bool cond1 = (root ->val > lowerBound );
        bool cond2 = (root -> val < upperBound);
        bool leftans = solve( root -> left , lowerBound , root ->val);
        bool rightans = solve( root ->right , root ->val , upperBound);
        if(cond1 && cond2 && leftans && rightans  ){
            return true ;
        }
        else 
        return false ;
        
    }
     bool isValidBST(TreeNode* root) {
        long long int lowerBound =  LLONG_MIN;
        long long int upperBound = LLONG_MAX;
         bool ans = solve( root , lowerBound , upperBound );
        return ans ; 
    }
};
     */
class Solution {
public:
  bool solve(TreeNode*root ,long long int lowerbond,  long long int upperbond){
    if( root == NULL){
        return true ;
    }
    bool cond1 =   (root -> val > lowerbond);
    bool cond2 =   ( root ->val < upperbond);
    bool leftans = solve( root->left  , lowerbond , root -> val );
    bool rightans = solve( root->right , root -> val  , upperbond); 
    if(cond1 && cond2 && leftans && rightans  ){
            return true ;
        }
        else 
        return false ;

  }
    bool isValidBST(TreeNode* root) {
        long long int lowerbond = LLONG_MIN ;
        long long int upperbond = LLONG_MAX;
        bool ans = solve(root , lowerbond , upperbond);
        return ans ;
    }
};
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
       /* 
        if( root == NULL){
            return true ;
        }
        bool cond1 = ( root-> val > lowerBound);
        bool cond2 = ( root -> val < upperBound);
        bool leftAns = solve( root -> left  , lowerBound , root -> val);
        bool rightAns = solve( root -> right , root -> val , upperBound );
        if(cond1 && cond2 && leftAns && rightAns  ){
            return true ;
        }
        else 
        return false ;
        
    }
    bool isValidBST(TreeNode* root) {
        long long int lowerBound =  LLONG_MIN;
        long long int upperBound = LLONG_MAX;
        bool ans = solve( root , lowerBound , upperBound );
        return ans ; 
    }
};*/