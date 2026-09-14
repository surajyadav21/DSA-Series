class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        // code here
        int xr = 0;
        for(int i=0; i<arr.size(); i++){
            xr ^= arr[i];
        }
        return xr;
    }
};