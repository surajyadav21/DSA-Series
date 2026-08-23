class Solution {
  public:
    int mean(vector<int>& arr) {
        int sum = 0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
        }
        return sum / arr.size();
        
    }

    int median(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int st = 0, end = arr.size()-1;
        int mid = st + (end - st)/2;
        
        if(arr.size()%2 == 0){
            return (arr[mid] + arr[mid+1])/2;
        }
        return arr[mid];
    }
};
