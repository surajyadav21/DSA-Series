class Solution {
public:
    int countDigits(int num) {
        int cnt=0;
        int temp = num;
            while(temp>0){
                int dig = temp % 10;
                if(num % dig == 0){
                    cnt++;
                }
            
            temp /= 10;
        }
        
        return cnt;
    }
};