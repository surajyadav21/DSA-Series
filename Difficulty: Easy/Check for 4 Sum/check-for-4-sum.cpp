class Solution {
  public:
    bool fourSum(vector<int>& arr, int x) {
        sort(arr.begin(),arr.end());
        
        for(int i=0; i<arr.size(); i++){
            if(i>0 && arr[i]==arr[i-1]) continue;
            for(int j=i+1; j<arr.size(); j++){
                if(j != i+1 && arr[j]==arr[j-1]) continue;
                
                int k=j+1;
                int l = arr.size()-1;
                while(k<l){
                    int sum = arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum == x){
                        return true;
                    }
                    else if(sum < x) k++;
                    else l--;
                }
            }
        }
        return false;
    }
};