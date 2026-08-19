class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        for(int i=start; i<=end; i++){
            bool found = false;
            for(int j=0; j<arr.size(); j++){
                if(i==arr[j]){
                    found = true;
                    break;
                }
            }
            if(!found){
                return false;
            }
        }
        return true;
    }
};
