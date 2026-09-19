class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int n = arr.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        int leftSum = 0;
        for(int i=0; i<n; i++){
            sum -= arr[i];
            if(leftSum == sum){
                return i;
            }
            leftSum += arr[i];
        }
        return -1;
    }
};