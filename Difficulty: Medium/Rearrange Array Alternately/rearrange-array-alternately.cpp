class Solution {
  public:
    void rearrange(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> temp;
        int l=0, r=arr.size()-1;
        while(l<=r){
            temp.push_back(arr[r]);
            temp.push_back(arr[l]);
            l++; r--;
        }
        for(int i=0; i<temp.size(); i++){
            arr[i] = temp[i];
        }
    }
};