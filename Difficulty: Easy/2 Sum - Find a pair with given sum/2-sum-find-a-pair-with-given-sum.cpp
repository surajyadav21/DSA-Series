class Solution {
  public:
    vector<int> twoSum(vector<int> &arr, int target) {
        map<int,int> mpp;
        for(int i=0; i<arr.size(); i++){
            int cur = arr[i];
            int need = target - cur;
            if(mpp.find(need) != mpp.end()){
                return {need, cur};
            }
            mpp[cur] = i;
        }
        return {};
    }
};