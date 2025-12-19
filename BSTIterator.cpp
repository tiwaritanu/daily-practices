class BSTIterator {
public:
    stack<TreeNode*> s;
    void storeLeftNode(TreeNode* root) {
        while(root != NULL){
            s.push(root);
            root = root->left;
        }
    }
    BSTIterator(TreeNode* root) {
     storeLeftNode(root);
        
    }
    
    int next() {
        TreeNode* ans = s.top();
        s.pop();
        
        storeLeftNode(ans->right);
        return ans->val;
    }
    
    bool hasNext() {
      return s.size() > 0;  
    }
};