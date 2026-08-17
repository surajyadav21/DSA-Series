class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int> set;
        
        for(int i=0; i<a.size(); i++){
            set.insert(a[i]);
        }
        for(int i=0; i<b.size(); i++){
            set.insert(b[i]);
        }
        
        vector<int> temp;
        
        for(int it : set){
            temp.push_back(it);
        }
        return temp;
    }
};