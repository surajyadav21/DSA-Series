class Solution {
  public:
    int minSubarraySum(vector<int> &arr) {
        int n = arr.size();
        int mini = arr[0];
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
            mini = min(mini, sum);
            if(sum > 0){
                sum = 0;
            }
        }
        return mini;
    }
};