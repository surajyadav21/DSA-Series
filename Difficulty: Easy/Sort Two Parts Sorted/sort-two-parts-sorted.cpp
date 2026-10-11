class Solution {
  public:
    void mergeTwoParts(vector<int>& arr) {
        int n = arr.size();
        int i=0;
        while(i<n-1 && arr[i]<=arr[i+1]){
            i++;
        }
        if(i == n-1){
            return;
        }
        vector<int> temp1(arr.begin(), arr.begin()+i+1);
        vector<int> temp2(arr.begin()+i+1, arr.end());
        vector<int> res;
        
        int j=0, k=0;
        while(j<temp1.size() && k<temp2.size()){
            if(temp1[j] <= temp2[k]){
                res.push_back(temp1[j]);
                j++;
            }else{
                res.push_back(temp2[k]);
                k++;
            }
        }
        while(j<temp1.size()){
            res.push_back(temp1[j]);
            j++;
        }
        while(k<temp2.size()){
            res.push_back(temp2[k]);
            k++;
        }
        for(int i=0; i<n; i++){
            arr[i] = res[i];
        }
    }
};