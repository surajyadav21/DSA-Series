class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> rmin;
        for(int i=0; i<m; i++){
            int mini = INT_MAX;
            for(int j=0; j<n; j++){
                mini = min(mini, matrix[i][j]);
            }
            rmin.push_back(mini);
        }
        vector<int> cmax;
        for(int j=0; j<n; j++){
            int maxi = INT_MIN;
            for(int i=0; i<m; i++){
                maxi = max(maxi, matrix[i][j]);
            }
            cmax.push_back(maxi);
        }
        vector<int> luckyNumbers;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (matrix[i][j] == rmin[i] && matrix[i][j] == cmax[j]) {
                    luckyNumbers.push_back(matrix[i][j]);
                }
            }
        }

        return luckyNumbers;
    }
};