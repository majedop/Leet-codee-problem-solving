class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        map<int, int> mp;
        {
            for (auto it : nums)
                mp[it]++;
        }
        int k = 0;
        for (auto it : mp) {
            nums[k] = it.first;
            k++;
        }
        return k;
    }
};
