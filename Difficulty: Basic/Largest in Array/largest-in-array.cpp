class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int curr = arr[0];
        for(int i=0; i<arr.size(); i++){
            if(curr < arr[i]){
                curr = arr[i];
            }
        }
        return curr;
    }
};
