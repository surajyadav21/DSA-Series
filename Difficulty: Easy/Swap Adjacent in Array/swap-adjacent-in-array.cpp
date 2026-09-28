class Solution {
  public:
    void swapElements(vector<int> &arr){
        int i=0;
        int j=i+2;
        while(j<arr.size()){
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
    }
};