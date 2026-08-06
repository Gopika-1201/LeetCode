class Solution {
public:
    bool isPalindrome(string s) {
        string strr,str;
        int count=0;
        
        
        for(char ch:s){
            ch=tolower(ch);
          if((ch>='0'&&ch<='9')||(ch>='a'&&ch<='z')) 
           strr.push_back(ch);
        }
        for(char c:strr){
          str.push_back(c);
        }
        int i=0;
        int j=str.length()-1;
        while(i<j){
            char temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            i++;
            j--;
        }
        if(str.compare(strr)==0) return true;
        else return false;

    }
};