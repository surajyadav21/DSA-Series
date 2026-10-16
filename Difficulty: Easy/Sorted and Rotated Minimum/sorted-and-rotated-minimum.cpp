class Solution {
  public:
    int findMin(vector<int>& arr) {
        int n = arr.size();
        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                return arr[i+1];
            }
        }
        return arr[0];
    }
};