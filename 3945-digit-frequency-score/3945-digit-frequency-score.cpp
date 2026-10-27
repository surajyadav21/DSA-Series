class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> temp;
        while(n>0){
            int dig = n%10;
            temp.push_back(dig);
            n /= 10;
        }
        unordered_map<int,int> mp;
        for(int i=0; i<temp.size(); i++){
            mp[temp[i]]++;
        }
        int ans=0;
        for(auto i: mp){
            ans = ans + (i.second * i.first);
        }
        return ans;
    }
};