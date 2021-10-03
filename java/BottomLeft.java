import java.util.*;
public class BottomLeft{
  public static class TreeNode {
     int val;
     TreeNode left;
     TreeNode right;
     TreeNode() {}
    TreeNode(int val) { this.val = val; }
     TreeNode(int val, TreeNode left, TreeNode right) {
         this.val = val;
         this.left = left;
         this.right = right;
    }
}
 
 
public static class Solution {
	TreeNode root;
    public int findBottomLeftValue(TreeNode root) {
        int result=0;
        Queue<TreeNode> q= new LinkedList<>();
        q.add(root);
        while(!q.isEmpty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode re=q.remove();
                if(i==0){
                    result=re.val;
                }
                if(re.left !=null){
                    q.add(re.left);
                }
                if(re.right !=null){
                    q.add(re.right);
                }
            }
        }
        return result;
    }
}
public static void main(String args[])  
    { 
        Solution tree = new Solution(); 
        tree.root = new TreeNode(1); 
        tree.root.left = new TreeNode(2); 
        tree.root.right = new TreeNode(2); 
        tree.root.left.left = new TreeNode(3); 
        tree.root.left.right = new TreeNode(4); 
        tree.root.right.left = new TreeNode(4); 
        tree.root.right.right = new TreeNode(3); 
        int output = tree.findBottomLeftValue(tree.root); 
        System.out.println("Bottom Left Value :" + output); 
      
 }
}