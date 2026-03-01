/*******  LEVEL ORDER TRAVERSAL **********/

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        queue<TreeNode *> q;
        vector<vector<int>> vec;
        if (!root)
        {
            return vec;
        }
        q.push(root);
        while (!q.empty())
        {
            vector<int> ok;
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                TreeNode *x = q.front();
                q.pop();
                if (x->left)
                {
                    q.push(x->left);
                }
                if (x->right)
                {
                    q.push(x->right);
                }
                ok.push_back(x->val);
            }
            vec.push_back(ok);
        }
        return vec;
    }
};