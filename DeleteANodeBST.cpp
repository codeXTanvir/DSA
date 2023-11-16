deleteNode(TreeNode* root, int val)
{
    if(root == nullptr)return root;

    if(val < root->value)
    {
        root->left = deleteNode(root->left,val);
        return root;
    }
    else if(val > root->value)
    {
        root->right = deleteNode(root->right,val);
        delete root;
        return nullptr;
    }

    else if (root->right == nullptr)
    {
        TreeNode* succ = root->left;
        delete root;
        return succ;
    }

    else if(root->left == nullptr)
    {
        TreeNode* succ = root->left;
        TreeNode* curr = root->left;
        while(curr->right != nullptr)
        {
            curr = curr->right;
            delete root;
            return succ;
        }

    }
}


