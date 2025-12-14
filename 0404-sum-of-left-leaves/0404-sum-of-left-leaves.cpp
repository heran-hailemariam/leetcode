class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        dfs(root, sum);
        return sum;
    }
    void dfs(TreeNode* node, int& sum) {
        if (!node) return;
        // Explore left subtree
        dfs(node->left, sum);
        // If left child exists and is a leaf, add its value
        if (node->left)
            if (!node->left->left && !node->left->right)
                sum += node->left->val;
        // Explore right subtree
        dfs(node->right, sum);
    }
};