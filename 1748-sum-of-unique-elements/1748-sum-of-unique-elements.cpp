class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        vector<int> freq(101, 0);
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
        }
        for(int i=0; i<freq.size(); i++){
            if(freq[i]==1){
                sum += i;
            }
        }
        return sum;
    }
};