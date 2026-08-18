class Solution {
  public:
    bool isPalindrome(vector<int> &arr) {
        // code here
        int st=0;
        int end = arr.size()-1;
        while(st<=end){
            if(arr[st] != arr[end]){
                return false;
            }
            st++; end--;
        }
        return true;
    }
};
