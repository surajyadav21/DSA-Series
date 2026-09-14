class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n, 0);
        for(int i=0; i<n; i++){
            ans[arr[i]-1]++;   
        }    
        return ans;
    }
};
