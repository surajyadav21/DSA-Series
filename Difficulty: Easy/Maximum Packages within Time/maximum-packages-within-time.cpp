class Solution {
  public:
    int maxPackages(vector<int>& arr, int totalTime) {
        int sum = 0, maxi = 0;
        int st = 0;
        for(int end=0; end<arr.size(); end++){
            sum += arr[end];
            if(end - st > totalTime - 1){
                sum -= arr[st];
                st++;
            }
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};