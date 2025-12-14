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
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2)
    {
        //Iterative approach
        //time complexity: O(n)
        //space complexity: O(n)

        //base case: if any of the tree is empty, returning the other one
        if(!root1)
            return root2;
        if(!root2)
            return root1;

        //taking a 'queue' to process corresponding nodes from both trees
        queue<pair<TreeNode*,TreeNode*>> q;
        //initially, inserting current 'root1' and 'root2' into queue
        q.push({root1,root2});

        while(!q.empty())
        {
            //current node from 1st tree
            TreeNode* ptr1=q.front().first;
            //current node from 2nd tree
            TreeNode* ptr2=q.front().second;

            //adding values of both nodes(merging values)
            ptr1->val=(ptr1->val)+(ptr2->val);
            //removing pair of corresponding nodes from 'queue'
            q.pop();

            //checking for LEFT-CHILD of both trees:
            //case-1: if both exist, push corresponding pair into 'queue'(to merge deeper)
            if((ptr1->left) && (ptr2->left))
                q.push({ptr1->left , ptr2->left});
            //case-2: if only ptr2 exists, attach it to ptr1's left
            else if((!ptr1->left) && (ptr2->left))
                ptr1->left=ptr2->left;

            //checking for RIGHT-CHILD of both trees:
            //case-1: if both exist, push corresponding pair into 'queue'(to merge deeper)
            if((ptr1->right) && (ptr2->right))
                q.push({ptr1->right , ptr2->right});
            //case-2: if only ptr2 exists, attach it to ptr1's right
            else if((!ptr1->right) && (ptr2->right))
                ptr1->right=ptr2->right;
        }
        //returning 'root' of merged tree
        return root1;
    }
};