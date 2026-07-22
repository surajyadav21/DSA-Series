class Solution {
  public:
    int firstSearch(vector<int> &arr, int k) {
        // code here
        int st=0, end=arr.size()-1;
        while(st<=end){
            int mid = st + (end - st)/2;
            if(k==arr[mid]){
                while(arr[mid-1]==k){
                    mid--;
                }
                return mid;
                
            }else if(arr[mid] > k){
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }
        return -1;
    }
};