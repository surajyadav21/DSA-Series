class Solution {
  public:
    int minRow(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        int ans = 1, ones = INT_MAX;
        for(int i=0; i<n; i++){
            int cnt=0;
            for(int j=0; j<m; j++){
                if(mat[i][j]==1){
                    cnt++;
                }
            }
            if(cnt < ones){
                ones = cnt;
                ans = i+1;
            }
        }
        return ans;
    }
};