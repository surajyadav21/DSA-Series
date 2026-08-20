class Solution {
  public:
    vector<int> colSum(vector<vector<int>>& mat) {
        // Code here
        int n = mat.size();
        int m = mat[0].size();
        vector<int> ans;
        for(int i=0; i<m; i++){
            int colSum = 0;
            for(int j=0; j<n; j++){
                colSum += mat[j][i];
            }
            ans.push_back(colSum);
        }
        return ans;
    }
};