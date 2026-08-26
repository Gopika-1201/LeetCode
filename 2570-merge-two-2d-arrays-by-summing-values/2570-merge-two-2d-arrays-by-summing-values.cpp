class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> ans=nums1;
        ans.insert(ans.end(),nums2.begin(),nums2.end());
        map<int,int> mp;
        for(auto row:ans){
            mp[row[0]]+=row[1];
        }
        vector<vector<int>> res;
        for(auto x:mp){
            res.push_back({x.first,x.second});
        
        }
        return res;
    }
};