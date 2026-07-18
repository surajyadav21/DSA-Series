class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++){
            if(i==arr.size()-1){
                return arr[i];
            }
        }
    }
};
