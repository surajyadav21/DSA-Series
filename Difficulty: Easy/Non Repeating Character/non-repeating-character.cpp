
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        vector<int> temp(256, 0);
        for(int i=0; i<s.size(); i++){
            temp[s[i]]++;
        }
        for(int i=0; i<s.size(); i++){
            if(temp[s[i]]==1){
                return s[i];
            }
        }
        return '$';
    }
};