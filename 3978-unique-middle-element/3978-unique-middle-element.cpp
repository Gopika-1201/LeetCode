class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int index=nums.size()/2;
        for(int i=0;i<nums.size();i++){
            if(i==index) continue;
            if(nums[i]==nums[index]) return false;
        }
return true;
    }
};