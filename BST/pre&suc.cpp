class Solution
{
public:
    void ok(Node *root, Node *&pre, Node *&suc, int key)
    {
        if (root == nullptr)
        {
            return;
        }
        if (root->data < key && (pre == nullptr || pre->data < root->data))
        {
            pre = root;
        }
        if (root->data > key && (suc == nullptr || suc->data > root->data))
        {
            suc = root;
        }
        ok(root->left, pre, suc, key);
        ok(root->right, pre, suc, key);
    }
    vector<Node *> findPreSuc(Node *root, int key)
    {
        // code here
        Node *pre = NULL;
        Node *suc = NULL;
        ok(root, pre, suc, key);
        return {pre, suc};
    }
};

// https://www.geeksforgeeks.org/problems/predecessor-and-successor/1