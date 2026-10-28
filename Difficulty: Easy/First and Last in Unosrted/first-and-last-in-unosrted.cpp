class Solution {
  public:
    vector<int> findIndex(vector<int>& arr, int key) {
        int st = -1;
        int end = -1;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==key){
                if(st == -1){
                    st = i;
                }
                end = i;
            }
        }
        return {st, end};
    }
};