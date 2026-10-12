class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        int i=0, j=0;
        int ans = a.size()-1;
        while(i<a.size() && j<b.size()){
            if(a[i]==b[j]){
                i++; j++;
            }
            else{
                ans = i;
                break;
            }
        }
        return ans;
    }
};