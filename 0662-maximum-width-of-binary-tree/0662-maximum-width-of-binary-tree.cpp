class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,unsigned long long>> q;
        q.push({root,0});
        int maxw=0;
        while(q.size()>0){
            int currl=q.size();
            unsigned long long start=q.front().second;
            unsigned long long end=q.back().second;
            maxw=max(maxw,(int)(end-start+1));
            for(int i=0;i<currl;i++){
                auto curr=q.front();
                q.pop();
                if(curr.first->left){
                    q.push({curr.first->left,2*curr.second+1});
                }
                if(curr.first->right){
                    q.push({curr.first->right,2*curr.second+2});
                }
            }
        }
        return maxw;
    }
};