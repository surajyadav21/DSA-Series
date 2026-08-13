class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        for(int i=0; i<arr.size(); i++){
            int cur = arr[i];
            int prev = i-1;
            while(prev>=0 && arr[prev] > cur){
                arr[prev+1] = arr[prev];
                prev--;
            }
            arr[prev+1] = cur;
        }
    }
};