class Solution {
public:
    int countAsterisks(string s) {
        int pair=0;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='|'){
                pair++;
            }
            if(pair%2==0&&s[i]=='*')
              count++;
        }
        return count;
    }
};