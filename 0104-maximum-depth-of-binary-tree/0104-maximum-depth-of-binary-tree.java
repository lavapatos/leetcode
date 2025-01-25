/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int maxDepth(TreeNode root) {
        int count = 0;
        int countleft = 1;
        int countright = 1;
        if (root == null) {
            return count;
        }
        else {count++;}
        countleft += maxDepth(root.left);
        countright += maxDepth(root.right);
        if (countright >= countleft) {
            count = countright;
        }
        else {
            count = countleft;
        }
        return count;
    }
}