class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

       
        unordered_map<int, int> m;

        for (auto x : mp) {
            m[x.second]++;
        }

      
        for (int x : nums) {
            if (m[mp[x]] == 1) {
                return x;
            }
        }

        return -1;
    }
};