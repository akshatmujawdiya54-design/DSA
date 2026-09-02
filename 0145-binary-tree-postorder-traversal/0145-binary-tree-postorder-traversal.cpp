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
// void post(TreeNode *root,vector<int>&postorder)
// {
//     if(root==nullptr) return ;
//     post(root->left,postorder);
//     post(root->right,postorder);
//     postorder.push_back(root->val);
// }
    vector<int> postorderTraversal(TreeNode* root) {
        // vector<int>postorder;
        // postorder.reserve(100);
        // post(root,postorder);
        // return postorder;
        vector<int>postorder;
    if(root==nullptr) return postorder;

    stack<TreeNode *>st;
    st.push(root);

    while(!st.empty())
    {
        TreeNode *node=st.top();
        st.pop();

        postorder.push_back(node->val);

        if(node->left)
            st.push(node->left);
        if(node->right)
            st.push(node->right);
    }
    reverse(postorder.begin(),postorder.end());
    return postorder;
    }
};