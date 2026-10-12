class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        int n = arr.size();
        int ans = n;
        for(int i=0; i<n; i++){
            if(arr[i]==k || arr[i]>k){
                ans = i;
                break;
            }
        }
        return ans;
    }
};