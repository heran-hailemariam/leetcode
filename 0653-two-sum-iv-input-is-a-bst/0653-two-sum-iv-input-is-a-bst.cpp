/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator{
    public:
    stack<TreeNode*>st;
    bool dir;
    BSTIterator(TreeNode* root,bool dir){
        this->dir=dir;
        pushAll(root);
    }
    int next(){
        TreeNode* tmp=st.top();
        st.pop();
        TreeNode* mov=dir==1?tmp->right:tmp->left;
        pushAll(mov);
        return tmp->val;
    }
    bool hasnext(){
        return !st.empty();
    }
    void pushAll(TreeNode* root){
        for(;root!=NULL;){
            st.push(root);
            root=dir==1?root->left:root->right;
        }
    }
};
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        BSTIterator p1(root,true);
        BSTIterator p2(root,false);
        int left = p1.next();
        int right = p2.next();

        while (left < right) {  
            int sum = left + right;

            if (sum == k)
                return true;

            if (sum < k) {
                if (!p1.hasnext()) break;
                left = p1.next();
            } else {
                if (!p2.hasnext()) break;
                right = p2.next();
            }
        }
        return false;

    }
};