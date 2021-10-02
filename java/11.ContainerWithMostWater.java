/*
Given n non-negative integers (a_1, a_2, ..., a_n)where each represents a point at coordinate (i, a_i).
‘ n ‘ vertical lines are drawn such that the two endpoints of line i is at (i, a_i) and (i, 0) . 
Find two lines, which together with x-axis forms a container, such that the container contains the most water.
*/
public class Solution {
    public int maxArea(int[] height) {
        int left = 0, right = height.length -1;
        int max = 0;
        while (left < right) {
            max = Math.max(max, Math.min(height[left], height[right]) * (right - left));
            if (height[left] < height[right]) {
                left ++;
            }
            else {
                right --;
            }
        }
        return max;
    }
}
