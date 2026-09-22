class Solution {
public:
    void reverse(vector<int>& arr, int left, int right){
        int i=left;
        int j=right-1;
        while(i<=j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; 
        reverse(nums, 0, n);
        reverse(nums, 0, k);
        reverse(nums, k, n);
    }
};