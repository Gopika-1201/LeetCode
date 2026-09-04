class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index;
        int found=0;
        for(int i=0;i<word.length();i++){
            if(word[i]==ch){
                found=1;
                index=i;
                break;
            }
        }if(found){
        reverse(word.begin(),word.begin()+index+1);
        }
        return word;
    }
};