class Solution {
public:
    bool vowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
           c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
       int l=0;
       int r = s.length();
       while(l < r){
        while(l<r && !vowel(s[l])) l++;
        while(l<r && !vowel(s[r])) r--;
        swap(s[l], s[r]);
        l++; r--;
       }
       return s;
    }
};