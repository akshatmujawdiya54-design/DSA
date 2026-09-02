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
void level(TreeNode *root,vector<vector<int>>&levelorder)
{
    queue<TreeNode *>q;
    q.push(root);
    TreeNode *temp;
    while(!q.empty())
    {
        int n=q.size();
        vector<int>currentlevel;
        for(int i=0;i<n;i++)
        {
        if(root==nullptr) return;
        temp=q.front();
        q.pop();
        currentlevel.push_back(temp->val);
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    }
    levelorder.push_back(currentlevel);
    }
}
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>levelorder;
        level(root,levelorder);
        return levelorder;
    }
};