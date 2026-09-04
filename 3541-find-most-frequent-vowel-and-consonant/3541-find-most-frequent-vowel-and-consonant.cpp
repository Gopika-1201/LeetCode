class Solution {
public:
    int maxFreqSum(string s) {
        map<int,int> vowel;
        map<int,int> cons;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                vowel[s[i]]++;
            }else{
                cons[s[i]]++;
            }
        }
        int max_vow=0;
        int max_cons=0;
        for(auto x:vowel){
               if(x.second>max_vow) max_vow=x.second;
        }
        for(auto x:cons){
               if(x.second>max_cons) max_cons=x.second;
        }
        return max_vow+max_cons;
    }
};