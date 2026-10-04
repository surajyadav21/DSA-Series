class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        int n=arr.size();
        for(int i=1; i<n; i+=2){
            if(i<=n-1){
                swap(arr[i],arr[i-1]);
            }
        }
        
    }
};