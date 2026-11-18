class Solution {
public:
    int minimumSum(int num) {
        vector<int> temp;
        while(num > 0){
            temp.push_back(num % 10);
            num /= 10;
        }
        sort(temp.begin(), temp.end());
        int new1 = temp[0] * 10 + temp[3];
        int new2 = temp[1] * 10 + temp[2];
        return new1 + new2;
    }
};