void sumRowsCols(int mat[][10], int rows, int cols, int rowSum[], int colSum[]){
    for(int i = 0; i<rows; i++){
        rowSum[i]=0;
    }
    for(int j = 0; j<cols; j++){
        rowSum[i]+=mat[i][j];
        colSum[j]+=mat[i][j];
    }
}
}
