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

    vector<int> helper(TreeNode* root, vector<int> now){
        // 여기서는 왼쪽 받은거 넣고 자기 넣고 오른쪽 받은거 넣고 위로 넘겨주자
        // pseudo code

        // 종료지점 leaf에 도달하면 종료
        if (!root->left && !root->right){
            vector<int> x;
            x.push_back(root->val);
            return x;
        }

    
        vector<int> ans;

        if (root->left){
            vector<int> left;
            left = helper(root->left, now);
            for (int i=0; i<left.size(); i++){
                ans.push_back(left[i]);
            }
        }

        ans.push_back(root->val);

        if (root->right){
            vector<int> right;
            right = helper(root->right, now);
            for (int j=0; j<right.size(); j++){
                ans.push_back(right[j]);
            }
        }

        return ans;
    }

    vector<int> inorderTraversal(TreeNode* root) {
        // inorder이니까 stack으로 구현하자
        // top 보고 왼쪽 있으면 왼쪽 stack에 넣고 없으면 pop하고 오른쪽 넣기
        vector<int> ans;
        if (!root){
            return ans;
        }
        ans = helper(root, ans);

        return ans;
        
    }
};