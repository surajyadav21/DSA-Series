class Solution {
public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) {
        sort(b.begin(), b.end());

        vector<int> res;

        for (int i = 0; i < a.size(); i++) {
            int cnt = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
            res.push_back(cnt);
        }

        return res;
    }
};