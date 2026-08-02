class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> sol;
        set<int> seen;
        int n = numbers.size();



        // for numbers 
        // int i = 0, j = numbers.size();
        // for (int i = 0; i < n; ++i) {
        //     int t = target - numbers[i];
        //     if (seen.count(t)) {
        //         sol.push_back(t);
        //         sol.push_back(numbers[i]);
        //     }
        //     seen.insert(numbers[i]);
        // }

        // for indexes

        int i = 0;
        int j = numbers.size() - 1;
        while (i < j) {
            int sum = numbers[i] + numbers[j];
            if (sum > target) {
                j--;
            } else if (sum < target) {
                i++;
            } else {
                sol.push_back(i+1);
                sol.push_back(j+1);
                return sol;
            }
        }

        return sol;
    }
};
