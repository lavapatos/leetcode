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
    public List<Integer> postorderTraversal(TreeNode root) {
        List<Integer> resp = new ArrayList<>();;
        if (root == null) {
            return resp;
        }
        resp.addAll(postorderTraversal(root.left));
        resp.addAll(postorderTraversal(root.right));
        resp.add(root.val);
        return resp;
        
    }
}