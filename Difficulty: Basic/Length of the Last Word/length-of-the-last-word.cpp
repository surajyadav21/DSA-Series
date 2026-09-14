class Solution {
  public:
    int lastWordLen(string &s) {
        int end = s.size()-1;
        while(end>=0 && s[end] == ' '){
            end--;
        }
        int st = end;
        while(st>=0 && s[st] != ' '){
            st--;
        }
        return end - st;
    }
};