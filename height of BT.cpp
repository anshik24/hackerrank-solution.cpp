    int height(Node* root) {
        if(root==NULL)return -1;

        int lheight=height(root->left);
        int rheight=height(root->right);
    
    return max(lheight,rheight) +1;
    }
