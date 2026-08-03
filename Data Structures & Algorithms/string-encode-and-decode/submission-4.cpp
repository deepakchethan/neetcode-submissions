class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        if (strs.size() == 0) {
            return "";
        }
        for (int i = 0; i < strs.size(); ++i) {
            if (i == 0) {
                encoded = strs[i];
                continue;
            }
            encoded = encoded + ";;;" + strs[i];
        }
        return encoded + ";;;";
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        string temp;
        for (int i = 0; i < s.size(); ) {
            if (s[i]==';' && s[i+1]==';' && s[i+2]==';') {
                decoded.push_back(temp);
                temp="";
                i=i+3;
            } else {
                temp = temp + s[i];
                i++;
            }
        }
        
        return decoded;
    }
};
