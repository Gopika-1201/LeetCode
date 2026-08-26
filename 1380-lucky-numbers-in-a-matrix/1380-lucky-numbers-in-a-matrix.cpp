class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;
        for(int k=0;k<matrix.size();k++){
            int min=0;
            int max=0;
            for(int i=0;i<matrix[k].size();i++){
                if(matrix[k][i]<matrix[k][min]) min=i;
            }
            for(int j=0;j<matrix.size();j++){
                if(matrix[j][min]>matrix[max][min]) max=j;
            }
            if (max == k) {
                ans.push_back(matrix[k][min]);
            }
        }
        return ans;
    }
};