class Solution {
public:
    string clearDigits(string s) {
        bool found = true;
        while (found) {
            found = false;
            for (int i = 0; i < s.length(); i++) {
                if (isdigit(s[i])) {
                    found = true;
                    s.erase(i, 1);
                    s.erase(i - 1, 1);
                    break;
                }
            }
        }
        return s;
    }
};