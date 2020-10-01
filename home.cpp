vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==nullptr)
            return {};
        int size;
        vector<vector<int>> result;
        vector<int> v2;
        queue<TreeNode*> q1;
        q1.push(root);
        while(!q1.empty())
        {
            size=q1.size();
            TreeNode* current;
            for(int i=0;i<=size-1;i++)
            {
                current=q1.front();
                v2.push_back(current->val);
                q1.pop();
                if(current->left!=nullptr)
                     q1.push(current->left);
                if(current->right!= nullptr)
                    q1.push(current->right);
            }
            result.push_back(v2);
            v2.clear();
        }
        return result;
    }
