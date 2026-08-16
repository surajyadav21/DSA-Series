class Solution {
  public:
    void reverse(vector<int> &arr, int left, int right){
        
        while(left < right){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++; right--;
        }
    }
    void reverseInGroups(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        for (int i = 0; i < n; i += k) {
            int start = i;
            int end = min(i + k - 1, n - 1);
            reverse(arr, start, end);
        }
    }
};
