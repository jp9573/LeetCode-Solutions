/* Problem Link - https://leetcode.com/problems/max-area-of-island/ 

You are given an m x n binary matrix grid. An island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.)
You may assume all four edges of the grid are surrounded by water.

The area of an island is the number of cells with a value 1 in the island.

Return the maximum area of an island in grid. If there is no island, return 0.

For example - 
m = 4, n = 4
4x4 matrix 
0 1 0 0 
1 1 0 0
0 1 0 1
0 0 1 1

Islands - 
|	1   |   1
| 1 1 | 1 1
|	1   |

There are 2 islands here first one which is having area 4
and second one whose area is 3
so we return max which is 4.

*/
/*
Time Complexity - O(mxn)
Space Complexity - O(1)
as we're manipulating original array
*/


class Solution {
public:
	//Variables to store no. of rows and columns
    int row;
    int col;
    //utility function to check if the row and col are valid.
    bool isvalid(int r,int c){
        if((r >= 0 && r < row) && (c >= 0 && c < col))
            return true;
        return false;
    }
    //The dfs recursive function that gives you the area of an island.
    int change(vector<vector<int>>& arr,int r,int c){
    	//checking if row and col is valid and also it is 1;
        if(isvalid(r,c) && arr[r][c] == 1){
        	//This is clever trick where we change the element
        	//from 1 to 0 so when we come across it again we don't 
        	//calculate it's area again
        	//this saves the extra array to manipulate seen indices
            arr[r][c] = 0;
            return 1 + change(arr,r+1,c) + change(arr,r-1,c) + change(arr,r,c+1) + change(arr,r,c-1);
        } 
        return 0;
    }
    //Function given by question
    int maxAreaOfIsland(vector<vector<int>>& arr) {
    	//getting rows and cols
        int m = arr.size();
        int n = arr[0].size();
        //setting them
        row = m;
        col = n;
        //intial maxarea to be 0
        int maxarea = 0;
        //Now going over every element in matrix and checking
        //if it is 1, if it is then start dfs search from that index
        //to get the area of island

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(arr[i][j] == 1)
                	//getting max area among all islands
                    maxarea = max(maxarea,change(arr,i,j));
            }
        }
        return maxarea;
    }
};
