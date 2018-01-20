/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void dfs(TreeNode* root, vector<vector<int> >& v, vector<int>& path, int B)
{
    if(root == NULL)
    return;
    
    // if root is a leaf node
    B -= root->val;
    path.push_back(root->val);
    if(root->left==NULL && root->right==NULL)
    {
        if(B==0)
        {
        v.push_back(path);
        }
        path.pop_back();
        return ;
    }
    //otherise recurese to the left and right subtree
    dfs(root->left,v,path,B);
    dfs(root->right, v,path,B);
    path.pop_back();
    return ;
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int> > v;
    vector<int> path;
    dfs(A,v,path,B);
    return v;
}

