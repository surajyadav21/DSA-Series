class Solution {
  public:
    int findMean(vector<int>& arr) {
        // code here
        int avg=0, sum=0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
        }
        avg = sum/arr.size();
        return avg;
    }
};