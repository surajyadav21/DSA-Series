class Solution {
public:
    bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return true;
        }
        return false;
    }
    int maxFreqSum(string s) {
        unordered_map<char,int> mp;
        for(char ch: s){
            mp[ch]++;
        }
        int v = 0, con = 0;
        for(char i='a'; i<='z'; i++){
            if(isVowel(i)){
                v = max(v, mp[i]);
            }
            else{
                con = max(con, mp[i]);
            }
        }
        return v + con;
    }
};