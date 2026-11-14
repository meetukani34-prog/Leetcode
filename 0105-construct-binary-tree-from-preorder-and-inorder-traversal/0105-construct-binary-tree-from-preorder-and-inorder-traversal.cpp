class Solution {
public:
    int search(vector<int> &inorder,int left,int right,int val){
        for(int i=left;i<=right;i++){
            if(inorder[i]==val){
                return i;
            }
        }
        return -1;
    }
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder,int left,int right,int& preInd){
        if(left>right){
            return NULL;
        }
        TreeNode* root=new TreeNode(preorder[preInd]);
        int inInd=search(inorder,left,right,preorder[preInd]);
        preInd++;
        root->left=helper(preorder,inorder,left,inInd-1,preInd);
        root->right=helper(preorder,inorder,inInd+1,right,preInd);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preInd=0;
        return helper(preorder,inorder,0,inorder.size()-1,preInd);
    }
};