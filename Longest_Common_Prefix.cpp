class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        if (strs.empty())
         return ans; 

        sort(strs.begin(), strs.end());
        string first = strs.front(); 
        string last = strs.back(); // Jehetu sortring kora acy

        for (int i = 0; i < first.size(); ++i) {
            if (first[i] == last[i]) {
                ans += first[i];
            } else {
                break; 
            }
        }
        return ans;
    }
};
