class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        vector<int> arr;
        int i=0, j=0;
        while(i<a.size() && j<b.size()){
            if(a[i]<=b[j]){
                arr.push_back(a[i]);
                i++;
            }else{
                arr.push_back(b[j]);
                j++;
            }
        }
        while(i<a.size()){
            arr.push_back(a[i]);
            i++;
        }
        while(j<b.size()){
            arr.push_back(b[j]);
            j++;
        }
        int n = arr.size();
        double ans=0;
        if(n%2==0){
            ans = (arr[n/2-1]+arr[(n/2)])/2.0;
        }
        else{
            ans = arr[n/2];
        }
        return ans;
    }
};