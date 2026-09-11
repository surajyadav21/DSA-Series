
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        sort(arr.begin(), arr.end());
        int i=0, j=1;
        while(i<arr.size() && j<arr.size()){
            int dif = abs(arr[i]-arr[j]);
            if(i==j){
                j++;
                continue;
            }
            if(dif==x){
                return true;
            }
            else if(dif < x){
                j++;
            }
            else{
                i++;
            }
        }
        return false;
    }
};
