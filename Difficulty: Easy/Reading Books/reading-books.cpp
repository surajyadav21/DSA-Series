class Solution {
  public:
    int maxPoint(int k, vector<int>& arr1, vector<int>& arr2) {
        // code here
        int n = arr1.size();
        int m = arr2.size();
        int maxp = 0;
        for(int i=0; i<n; i++){
            int currpoint = k/arr1[i] * arr2[i];
            maxp = max(maxp, currpoint);
            
        }
        return maxp;
    }
};