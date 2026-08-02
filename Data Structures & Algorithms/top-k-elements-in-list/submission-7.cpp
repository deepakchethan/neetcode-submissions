class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        map<int, int> freq;
        vector<int> sol;

        // get frequency
        for (auto n: nums) {
            freq[n]++;
        }

        // make buckets
        vector<vector<int>> a(n+1);
        for (auto& k: freq) {
            a[k.second].push_back(k.first);
        }


        // fetch top k
        int cnt = 0;
        for (int i = a.size() - 1; i >= 0; i--) {
            for (auto ko: a[i]) {
                sol.push_back(ko);
                cnt++;
                if (cnt == k) {
                   return sol;
                }
            }
        }

        return sol;
    }
};
