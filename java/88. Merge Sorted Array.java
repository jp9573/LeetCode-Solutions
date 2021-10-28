class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int total = n + m;
		
        for(int i = 0; i < n; i++) {
            nums1[total-i-1] = nums2[i];
        }
        Arrays.sort(nums1);
    
    }
}


/*
input:
[1,2,3,0,0,0]
3
[2,5,6]
3
Output
[1,2,2,3,5,6]
Expected
[1,2,2,3,5,6]
*/
