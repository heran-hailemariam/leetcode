/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    void lot(TreeNode* temp, int level, vector<vector<int>>& res) {
        if (temp == nullptr) {
            return;
        }

        // Create a new level if it does not exist
        if (level >= res.size()) {
            res.push_back(vector<int>());
        }

        // Traverse left subtree
        lot(temp->left, level + 1, res);

        // Store current node value
        res[level].push_back(temp->val);

        // Traverse right subtree
        lot(temp->right, level + 1, res);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        lot(root, 0, res);
        return res;
    }
};