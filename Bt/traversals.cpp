/* INORDER */
class Solution
{
public:
    void ok(TreeNode *root, vector<int> &vec)
    {
        if (!root)
        {
            return;
        }
        ok(root->left, vec);
        vec.push_back(root->val);
        ok(root->right, vec);
    }
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> vec;
        ok(root, vec);
        return vec;
    }
};


/* PREORDER */
class Solution
{
public:
    void helper(vector<int> &vec, TreeNode *root)
    {
        if (!root)
        {
            return;
        }
        vec.push_back(root->val);
        helper(vec, root->left);
        helper(vec, root->right);
    }
    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> vec;
        helper(vec, root);
        return vec;
    }
};


/* POSTORDER */
class Solution
{
public:
    void helper(vector<int> &vec, TreeNode *root)
    {
        if (!root)
        {
            return;
        }
        helper(vec, root->left);
        helper(vec, root->right);
        vec.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode *root)
    {
        vector<int> vec;
        helper(vec, root);
        return vec;
    }
};





