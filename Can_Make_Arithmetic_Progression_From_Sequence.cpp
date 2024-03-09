class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& v) {
        sort(v.begin(), v.end());
        int a = v.back();
        v.pop_back();
        int dis = a - v.back();
        while (v.size() > 1) {
            int c = v.back();
            v.pop_back();
            if (c - v.back() != dis)
                return false;
        }
        return true;
    }
};
