class Solution {
  public:
    void reverse(vector<int>& arr, int a, int b){
        while(a<b){
            int temp = arr[a];
            arr[a] = arr[b];
            arr[b] = temp;
            a++; b--;
        }
    }
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d=d%n;
        reverse(arr, 0, d-1);
        reverse(arr, d, n-1);
        reverse(arr, 0, n-1);
       
    }
};