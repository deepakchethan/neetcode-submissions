class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        set<string> seen;
        vector<vector<string>> sol;
        

        for (int i = 0; i < strs.size(); ++i) {
            if (seen.count(strs[i]) > 0) {
                continue;
            }
            vector<string> sub;
            sub.push_back(strs[i]);
            
            for (int j = i + 1; j < strs.size(); ++j) {
                if (isAnagram(strs[i], strs[j])) {
                    sub.push_back(strs[j]);
                    seen.insert(strs[j]);
                }
            }
            seen.insert(strs[i]);
            sol.push_back(sub);
        }
        return sol;
    }

    bool isAnagram(string s1, string s2) {
        map<char, int> mp;
        for(auto i: s1) {
            mp[i]++;
        }
        for (auto j: s2) {
            mp[j]--;
        }
        for (auto& k: mp) {
            if (k.second != 0) {
                return false;
            }
        }
        return true;
    }
};
