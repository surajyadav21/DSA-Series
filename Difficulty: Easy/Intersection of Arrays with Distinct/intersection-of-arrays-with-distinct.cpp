class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0;
        int j=0; 
        int cnt=0;
        while(i<a.size() && j<b.size()){
            if(a[i]==b[j]){
                cnt++;
                i++; j++;
            }else if(a[i]<b[j]){
                i++;
            }else if(a[i]>b[j]){
                j++;
            }
            
        }
        return cnt;
    }
};