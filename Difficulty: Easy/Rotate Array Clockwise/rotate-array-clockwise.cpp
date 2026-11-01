class Solution {
  public:
    void rotateclockwise(vector<int>& arr, int k) {
        int n =arr.size();
        k = k%n;
        vector<int> temp;
        for(int i=n-k; i<n; i++){
            temp.push_back(arr[i]);
        }
        for(int i=0; i<n-k; i++){
            temp.push_back(arr[i]);
        }
        for(int i=0; i<temp.size(); i++){
            arr[i] = temp[i];
        }
    }
};
