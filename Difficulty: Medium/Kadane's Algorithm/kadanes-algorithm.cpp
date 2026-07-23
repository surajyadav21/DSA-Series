class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int sum = 0;
        int maxi = -1e9;
        for(auto v : arr){
            sum += v;
            maxi = max(maxi, sum);
            if(sum < 0) sum = 0;
        }
        return maxi;
    }
};