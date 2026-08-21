class Solution {
  public:
    int findDuplicate(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for(int i=1; i<arr.size(); i++){
            if(arr[i-1]==arr[i]){
                return arr[i];
            }
        }
    }
};