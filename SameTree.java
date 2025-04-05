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
    public boolean isSameTree(TreeNode p, TreeNode q) {
        Stack<TreeNode> stackp = new Stack();
        Stack<TreeNode> stackq = new Stack();

        stackp.push(p);
        stackq.push(q);

       while( !stackp.isEmpty() || !stackq.isEmpty()){
        
            TreeNode currp = stackp.pop();
            TreeNode currq = stackq.pop();

            if((currp == null && currq != null ) || (currp != null && currq == null )){
                return false;
            }
            if(currp == null && currq == null){
                continue ;
            }
            if(currp.val != currq.val){
                return false;

            }
            
            stackp.push(currp.left);
            stackp.push(currp.right);

            stackq.push(currq.left);
            stackq.push(currq.right);

        } 
        return stackp.isEmpty() && stackq.isEmpty(); 
    
    }
    
}