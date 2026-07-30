class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        int i=0;
        int j=i+1;
        while(i < j && j<arr.size()){
            if(arr[i] != arr[j]){
                return {arr[i],arr[j]};
            }
                i++; j++;
        }
        return {-1};
    }
};