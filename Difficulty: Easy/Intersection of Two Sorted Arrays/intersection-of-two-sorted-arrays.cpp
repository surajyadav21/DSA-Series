class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        int i=0, j=0;
        while(i<a.size() && j<b.size()){
            if(a[i]==b[j]){
                ans.push_back(a[i]);
                i++; j++;
                while(i<a.size() && a[i-1]==a[i]){
                    i++;
                }
                while(j<b.size() && b[j-1]==b[j]){
                    j++;
                }
            }else if(a[i]<b[j]){
                i++;
            }else{
                j++;
            }
        }
        return ans;
    }
};