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
    public List<Integer> preorderTraversal(TreeNode root) {
        List<Integer> resp = new ArrayList<>();;
        if (root == null) {
            return resp;
        }
        resp.add(root.val);
        resp.addAll(preorderTraversal(root.left));
        resp.addAll(preorderTraversal(root.right));
        return resp;
    }
}