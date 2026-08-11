class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int left = 0;
        int right = 0;
        while(right<arr.size()){
            if(arr[right] != 0){
                swap(arr[right],arr[left]);
                left++;
            }
            right++;
        }
    }
};