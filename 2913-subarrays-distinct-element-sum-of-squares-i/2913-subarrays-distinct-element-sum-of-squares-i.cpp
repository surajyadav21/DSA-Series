class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            vector<int> temp;
            for(int j=i; j<n; j++){
                temp.push_back(nums[j]);
                set<int> st(temp.begin(), temp.end());
                int l = st.size();
                sum += l*l;
            }
        }
        return sum;
    }
};