class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> anagram=strs;
        for(int i=0;i<anagram.size();i++){
            sort(anagram[i].begin(),anagram[i].end());
        }
        map<string,vector<string>> mp;
        for(int i=0;i<anagram.size();i++){
            mp[anagram[i]].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};