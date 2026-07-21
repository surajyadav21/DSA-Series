class Solution {
  public:
    int findElementAtIndex(int i, vector<int> &arr) {
        // code here
        for(int j=0; j<arr.size(); j++){
            if(j==i) return arr[j];
        }
    }
};
