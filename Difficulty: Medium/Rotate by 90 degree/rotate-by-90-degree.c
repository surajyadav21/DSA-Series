void rotateMatrix(int **mat, int n) {
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    
    for(int j=0; j<n; j++){
        int top = 0;
        int bottom = n - 1;
        
        while(top < bottom){
            int temp = mat[top][j];
            mat[top][j] = mat[bottom][j];
            mat[bottom][j] = temp;
            
            top++;
            bottom--;
        }
    }
}