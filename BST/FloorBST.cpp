class Solution {
  public:
    int findFloor(Node* root, int x) {
        // code here
        int ans=-1;
        while(root){
            if(root->data==x){
                ans = x;
                return ans;
            }
            if(root->data<x){
                ans = root->data;
                root = root->right;
            }else{
                root = root->left;
            }
        }
        return ans;
    }
};