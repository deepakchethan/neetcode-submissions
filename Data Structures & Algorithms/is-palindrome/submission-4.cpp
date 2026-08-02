class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 0) {
            return false;
        }
        int i = 0, j=s.size();
        while(i < j) {
            if (!isalnum(s[i])) {
                i++;
            } else if (!isalnum(s[j])) {
                j--;
            } else if (tolower(s[i]) != tolower(s[j])) {
                return false;
            } else {
                i++;
                j--;
            }
        }
        return true;
    }
};
