int diagonalDifference(vector<vector<int>> arr) {
    
    int n=arr.size();
    int i=0;
    int j=0;
    int sum1=0;
    
    //1st diagonal
    while(i<n)
    {
        sum1+=arr[i][j];
        i++;
        j++;
    }
    
    //2nd diagonal
    i=0;
    j=n-1;
    int sum2=0;
    while(i<n)
    {
        sum2+=arr[i][j];
        i++;
        j--;
    }
    
    return abs(sum1-sum2);
}