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
/*class Solution {
public:
    int maxDepth(TreeNode* root) {
       // base case 
        if( root == NULL){
           return 0 ; 
        } 
        int leftHeight = maxDepth( root->left);
        int rightHeight = maxDepth( root ->right);
        int height = max( leftHeight , rightHeight) +1 ; 
        return height ; 
    }
};
*/class Solution {
    public:
int maxDepth(TreeNode* root){
   if( root == NULL){
    return 0;
   }
    int leftheight =  maxDepth(root -> left );
    int rightheight = maxDepth(root-> right);
    return max( leftheight , rightheight) +1 ;
}
    };
   


















   
    /*
public:
int maxDepth(TreeNode* root){
if(root == NULL )
return 0 ;
queue<TreeNode*>q;
q.push(root);
q.push(NULL);
int count = 1 ;
while(!q.empty()){
    TreeNode*front = q.front();
    q.pop();
    if( front == NULL){
       cout<<endl ; 
    if(!q.empty()){
      count++;
      q.push(NULL);
    }} else {
    if(front ->left != NULL){
        q.push(front->left); }
    if( front ->right != NULL){
        q.push(front->right); }}
return count ;
}
};
*/









/* if (root == NULL) return 0; 
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);
    int count = 1 ; 

while(!q.empty()){
    TreeNode*front = q.front();
    q.pop();
    if( front == NULL){
        cout<<endl;
        if(!q.empty()){
            count++;
            //matlb  sare element level ke aa chuke hai 
            q.push(NULL);
        }
    }
    else {
        //valid Node wala cash  
         //cout<<front->data<<" ";
         if( front->left != NULL){
        q.push(front->left);
    }
    if( front-> right != NULL){
     q.push(front ->right);
    } }   } 
    return count ;
} 
};
*/



















