class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int> freq;
        for(auto x:mp){
            freq.push_back(x.second);
        }
        sort(freq.rbegin(),freq.rend());
        vector<int> ans;
        set<int> used;
for (int i = 0; i <k; i++) {

    for (auto it = mp.begin(); it != mp.end(); it++) {

          if (it->second == freq[i] && used.find(it->first) == used.end()) {
                    ans.push_back(it->first);
                    used.insert(it->first);
        if(ans.size()==k) return ans;

    }
}
}
return ans;
    }
};