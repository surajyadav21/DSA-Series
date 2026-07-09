class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for(int i=1; i<n; i++){
            for(int j=n-1; j>=1; j--){
                if(arr[j-1] != arr[j]) {
                    return arr[j-1];
                }
            }
        }
        return -1;
    }
};