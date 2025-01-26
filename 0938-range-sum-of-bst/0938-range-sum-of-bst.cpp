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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (root == NULL) {return 0;}

        int current, izq, der;
        if (root->val >= low && root->val <= high) {current = root->val;}
        else {current = 0;}
        
        izq = rangeSumBST(root->left, low, high);
        der = rangeSumBST(root->right, low, high);

        return current + izq + der;
    }
};