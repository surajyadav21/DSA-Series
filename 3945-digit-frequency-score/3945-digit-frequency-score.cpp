class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int> mp;
    
        while(n>0){
            int dig = n%10;
            mp[dig]++;
            n /= 10; 
        }
        
        int ans=0;
        for(auto i: mp){
            ans = ans + (i.second * i.first);
        }
        return ans;
    }
};