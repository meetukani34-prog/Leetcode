class Solution {
public:
    bool identical(TreeNode* p, TreeNode* q){
        if(p==NULL || q==NULL){
            return p==q;
        }
        return p->val==q->val 
                && identical(p->left,q->left)
                && identical(p->right,q->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL || subRoot==NULL){
            return root==subRoot;
        }
        if(root->val==subRoot->val && identical(root,subRoot)){
            return true;
        }
        return isSubtree(root->left,subRoot)
                || isSubtree(root->right,subRoot);

    }
};