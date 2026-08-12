class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        int idx=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
               nums[idx]=nums[i];
               count++;
               idx++;
            }
        }
        return count+1;
    }
};