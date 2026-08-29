class Solution {
public:
    string longestPalindrome(string s) {

        int n = s.size();

        bool dp[1000][1000] = {};

        int start = 0;
        int maxLen = 1;

        // Every single character is a palindrome
        for(int i = 0; i < n; i++) {
            dp[i][i] = true;
        }

        // Length of substring
        for(int len = 2; len <= n; len++) {

            for(int i = 0; i + len <= n; i++) {

                int j = i + len - 1;

                if(s[i] == s[j]) {

                    if(len <= 2)
                        dp[i][j] = true;
                    else
                        dp[i][j] = dp[i+1][j-1];
                }

                if(dp[i][j] == true) {

                    if(len > maxLen) {
                        start = i;
                        maxLen = len;
                    }
                }
            }
        }

        return s.substr(start, maxLen);
    }
};