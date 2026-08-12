class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // code here
        int ans = 0;
        sort(arr.begin(),arr.end());
        for(int i=0; i<arr.size(); i++){
            ans = ans + i*arr[i];
        }
        return ans;
    }
};