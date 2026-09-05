class Solution {
  public:
    bool areStringsSame(string &s1, string &s2) {
        int i=0; 
        int j=0;
        if(s1.size() != s2.size()) return false;
        while(i<s1.size() && j<s2.size()){
            if(s1[i] != s2[j]){
                return false;
            }
            i++;
            j++;
        }
        return true;
    }
};