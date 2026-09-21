class Solution {
  public:
    vector<int> filterByDigits(vector<int>& arr) {
        vector<int> res;
        for(int i=0; i<arr.size(); i++){
            int temp = arr[i];
            bool valid = true;
            while(temp > 0){
                int dig = temp % 10;
                if(dig!=1 && dig!=2 && dig!=3){
                    valid = false;
                    break;
                }
                temp /= 10;
            }
            if(valid){
                res.push_back(arr[i]);
            }
        }
        return res;
    }
};
