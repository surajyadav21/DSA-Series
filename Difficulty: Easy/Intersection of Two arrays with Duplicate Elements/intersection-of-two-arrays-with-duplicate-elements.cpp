class Solution {
  public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<int> ans;
        int i=0, j=0;
        while(i<a.size()&&j<b.size()){
            if(a[i]==b[j]){
                ans.push_back(a[i]);
                i++; j++;
                while(i<a.size() && a[i]==a[i-1]){
                    i++;
                }
                while(j<b.size() && b[j]==b[j-1]){
                    j++;
                }
            }
            else if(a[i]<b[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};