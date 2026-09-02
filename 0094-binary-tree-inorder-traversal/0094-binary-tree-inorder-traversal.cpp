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
    // void traversal(TreeNode *root, vector<int>&inorder)
    // {   
    //     if(root==nullptr) return ;
    //         traversal(root->left,inorder);
    //         inorder.push_back(root->val);
    //         traversal(root->right,inorder);
    // }
    vector<int> inorderTraversal(TreeNode* root) {
        //  vector<int>inorder;
        //  traversal(root,inorder);
        // return inorder;

        vector<int>inorder;

        stack<TreeNode *>st;
        TreeNode *curr=root;
        while(curr!=nullptr || !st.empty())
            {
                while(curr!=nullptr)
                {
                    st.push(curr);
                    curr=curr->left;
                }

                curr=st.top();
                st.pop();

                inorder.push_back(curr->val);

                curr=curr->right;
            }       
            return inorder;
    }
};