class Solution {
  public:
    vector<int> prefixAvg(vector<int> &arr) {
        int n = arr.size();
        vector<int> res;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
            int avg = sum / (i+1);
            res.push_back(avg);
        }
        return res;
    }
};