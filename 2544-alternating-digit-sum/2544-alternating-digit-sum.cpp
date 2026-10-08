class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        vector<int> arr;
        int i=0;
        while(n>0){
            int dig = n%10;
            arr.push_back(dig);
            n /= 10;
        }
        reverse(arr.begin(), arr.end());
        for(int i=0; i<arr.size(); i++){
            if(i%2==0){
                sum += arr[i];
            }else{
                sum -= arr[i];
            }
        }
        return sum;
    }
};