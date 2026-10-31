class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev = 0;
        int beam = 0;
        int n = bank.size();
        for(int i=0; i<n; i++){
            int cnt = 0;
            string cur = bank[i];
            for(int j=0; j<cur.size(); j++){
                if(cur[j]=='1'){
                    cnt++;
                }
            }
            if(cnt==0){
                continue;
            }
            beam += prev * cnt;
            prev = cnt;
        }
        
        return beam;
    }
};