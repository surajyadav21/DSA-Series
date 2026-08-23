class Solution {
  public:
    bool isDivBy8(string &s) {
        // code here
        int temp = 0;
        for(int i=0; i<s.size(); i++){
            temp = temp*10+s[i];
        }
        return (temp % 8 == 0);
    }
};