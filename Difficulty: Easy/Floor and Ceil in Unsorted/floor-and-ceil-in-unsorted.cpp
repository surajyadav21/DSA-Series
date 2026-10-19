class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int floor = -1, ceil = -1;
        int n = arr.size();
        for(int i=0; i<n; i++){
            if(arr[i]<=x && arr[i]>=floor){
                floor = arr[i];
            }
            if(arr[i]>=x && (ceil==-1 || arr[i]<ceil)){
                ceil = arr[i];
            }
        }
        return {floor, ceil};
    }
};