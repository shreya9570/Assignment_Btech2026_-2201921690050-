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
    TreeNode* searchBST(TreeNode* root, int val) {
        if (root == NULL)
            return NULL;
        if (root->val == val)
            return root;
        if (root->val > val)
            return searchBST(root->left, val);  // return added
        else
            return searchBST(root->right, val); // return added
    }
};

      
      
      
      
      
      
      
      
      
      
      
       /*while( root != NULL && root -> val != val ){
      if( val < root ->val)
          root = root -> left ;
    else 
          root = root -> right ;
      }
      return root ;
    }
};
*/
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
        /*while( root != NULL && root -> val != val ){
            if(root->val<val)
                root = root->right;
            else    
                root = root->left;
        }
    return root;
    }
};*/
        