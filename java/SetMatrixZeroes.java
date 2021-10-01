class Solution {
    public void setZeroes(int[][] matrix) {
        if(matrix==null || matrix.length==0 || matrix[0].length==0){
            return;
        }
        boolean row=false,column=false;
        for (int i=0;i<matrix.length;i++){
            if(matrix[i][0]==0){
                column=true;
                break;
            }
        }
        for(int j=0;j<matrix[0].length;j++){
            if(matrix[0][j]==0){
                row=true;
                break;
            }
        }
        for(int i=1;i<matrix.length;i++){
            for(int j=1;j<matrix[0].length;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<matrix.length;i++){
            if(matrix[i][0]==0){
                for(int j=1;j<matrix[0].length;j++){
                    matrix[i][j]=0;
                }
            }
        }
        for(int j=1;j<matrix[0].length;j++){
            if(matrix[0][j]==0){
                for(int i=1;i<matrix.length;i++){
                   matrix[i][j]=0;
                }
            }
        }
        if(column==true){
            for(int i=0;i<matrix.length;i++){
                matrix[i][0]=0;
            }
        }
        if(row==true){
            for(int j=0;j<matrix[0].length;j++){
               matrix[0][j]=0;
            }
        }
    }
}