class Solution {
  public:
    int maxStep(vector<int>& arr) {
        int n = arr.size();
        int maxi = 0;
        int cnt = 0;
        for(int i=0; i<n-1; i++){
            if(arr[i]<arr[i+1]){
                cnt++;
            }else{
                cnt=0;
            }
            maxi = max(maxi, cnt);
        }
        return maxi;
    }
};