class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> temp;
        int n = bank.size();
        for(int i=0; i<n; i++){
            int cnt = 0;
            string cur = bank[i];
            for(int j=0; j<cur.size(); j++){
                if(cur[j]=='1'){
                    cnt++;
                }
            }
            if(cnt>0){
                temp.push_back(cnt);
            }
        }
        
        // if(temp.size()==1){
        //     return 0;
        // }
        int beam = 0;
        for(int i=0; i+1<temp.size(); i++){
            beam += temp[i] * temp[i+1];
            
        }
        return beam;
    }
};