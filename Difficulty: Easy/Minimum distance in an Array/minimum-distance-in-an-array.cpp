class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        int dmin = -1;
        for(int i=0; i<arr.size(); i++){
            
            if(arr[i]==x){
                for(int j=0; j<arr.size(); j++){
                    if(arr[j]==y){
                        int dis = abs(i-j);
                        if(dmin == -1 || dis < dmin){
                            dmin = dis;
                        }
                    }
                }
            }
        }
        return dmin;
    }
};