class Solution {
  public:
    vector<int> sumTriangles(vector<vector<int>>& mat) {
        // code here
        vector<int> ans;
        int n = mat.size();
        int sum1 = 0;
        int sum2 = 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                
                if(i<=j){
                    sum1 = sum1 + mat[i][j];
                }
                if(i>=j){
                    sum2 = sum2 + mat[i][j];
                }
            }
        }
        ans.push_back(sum1);
        ans.push_back(sum2);
        return ans;
    }
};
