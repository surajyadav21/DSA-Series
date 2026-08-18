class Solution {
  public:
    vector<int> getMoreAndLess(vector<int> &arr, int target) {
        // code here
        int cnt1=0;
        int cnt2=0;
        for(int i=0; i<=arr.size()-1; i++){
            if(arr[i]<=target){
                cnt1++;
            }
            if(arr[i]>=target){
                cnt2++;
            }
        }
        return {cnt1,cnt2};
    }
};