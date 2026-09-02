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
void avg(TreeNode *root,vector<double>&avglevel)
{
    queue<TreeNode *>q;
    q.push(root);
    TreeNode *temp; 
    while(!q.empty())
    {
        int n=q.size();
        double sum=0;
        for(int i=0;i<n;i++)
        {
            temp=q.front();
            q.pop();
            sum+=(temp->val);
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
        avglevel.push_back((double)sum/n);
    }
}
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>avglevel;
        avg(root,avglevel);
        return avglevel;
    }
};