class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            if (strs.empty()) return ""; // Handle empty input
    
            string res = "";
            for (int i = 0; i < strs[0].size(); i++) {
                for (auto s : strs) {
                    if (i >= s.size() || s[i] != strs[0][i]) {
                        return res; // Return the result when mismatch occurs
                    }
                }
                res += strs[0][i];
            }
            return res; // Return final result
        }
    };