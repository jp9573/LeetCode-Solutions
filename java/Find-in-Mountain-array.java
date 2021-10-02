/**
 * // This is MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * interface MountainArray {
 *     public int get(int index) {}
 *     public int length() {}
 * }
 */
 
class Solution {
    public int findInMountainArray(int target, MountainArray mountainArr) {
        int start=0,end=mountainArr.length()-1;    // fixind our start and end
		int peak = -1;    // initialising peak as -1
        int ans = -1;    // initialising ans as -1
		
		//Below loop will give us the peak element
        while(start<end){
            int mid = start + (end - start)/2;
            if(mountainArr.get(mid) > mountainArr.get(mid+1))
                end = mid;
            else
                start = mid+1;
        }
        peak = start;    // when the loop is over, start and end will always points to peak element. Hence, peak=start=end
        
        ans = BinSrchAsc(mountainArr, 0, peak, target);    // applying binary search(Ascending) in LHS of peak element. From index 0 to index peak
		
		// if we cannot find the target element on the LHS of peak element then only try finding target on RHS of peak element
        if(ans == -1){
            ans = BinSrchDes(mountainArr,peak,mountainArr.length()-1,target);   // // applying binary search(Descending) in RHS of peak element. From index peak to index mountainArr.length()-1
        }
        return ans;    
    }
     //Ascending Binary Search
    int BinSrchAsc(MountainArray mountainArr,int start, int end, int target){
        while(start<=end){
            int mid = start + (end - start) / 2;
            if(mountainArr.get(mid)>target){
                end = mid-1;
            }
            else if(mountainArr.get(mid)<target){
                start = mid+1;
            }
            else{
                return mid;
            }  
        }
        return -1;
    }
    
	// Descending Binary Search
    int BinSrchDes(MountainArray mountainArr,int start, int end, int target){
        while(start<=end){
            int mid = start + (end - start) / 2;
            if(mountainArr.get(mid)<target){
                end = mid-1;
            }
            else if(mountainArr.get(mid)>target){
                start = mid+1;
            }
            else{
                return mid;
            }  
        }
        return -1;
    }
}
