class Solution {
public:
    void allpath(TreeNode* root,string path,vector<string> &ans){
        if(root->left==NULL && root->right==NULL){
            ans.push_back(path);
            return;
        }
        if(root->left){
            allpath(root->left,path+"->"+to_string(root->left->val),ans);
        }
        if(root->right){
            allpath(root->right,path+"->"+to_string(root->right->val),ans);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string path=to_string(root->val);
        allpath(root,path,ans);
        return ans;      
    }
};