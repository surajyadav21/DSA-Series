class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        for(int i=1; i<arr.size(); i++){
            arr[i] = arr[i] + arr[i-1];
        }
        return arr;
    }
};