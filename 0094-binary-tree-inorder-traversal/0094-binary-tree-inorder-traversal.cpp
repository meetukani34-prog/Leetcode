class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        TreeNode* curr=root;
        vector<int> res;
        while(!st.empty() || curr){
            while(curr){
                st.push(curr);
                curr=curr->left;
            }
            if(!st.empty()){
                TreeNode* node=st.top();st.pop();
                res.push_back(node->val);
                curr=node->right;
            }
        }
        return res;
    }
};