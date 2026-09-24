class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int missing = 0;
        int dup = 0;
        vector<int> temp;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                temp.push_back(grid[i][j]);
            }
        }
        vector<int> freq(n*n+1, 0);
        for(int i: temp){
            freq[i]++;
        }
        for(int i=1; i<freq.size(); i++){
            if(freq[i]==0){
                missing = i;
            }
            if(freq[i]==2){
                dup=i;
            }
        }
        return {dup,missing};
    }
};