class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        int st=0, end = arr.size()-1;
        sort(arr.begin(), arr.end());
        int mid = (st+end)/2;
        if(arr.size()%2 != 0){
            return arr[mid];
        }
        return (arr[mid]+arr[mid+1])/2.0;
    }
};