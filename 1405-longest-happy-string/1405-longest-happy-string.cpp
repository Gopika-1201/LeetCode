
class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string s = "";

        while (a > 0 || b > 0 || c > 0) {
            if (a >= b && a >= c && a > 0 &&
                !(s.size() >= 2 && s[s.size()-1] == 'a' && s[s.size()-2] == 'a')) {
                s += 'a';
                a--;
            }
            else if (b >= a && b >= c && b > 0 &&
                !(s.size() >= 2 && s[s.size()-1] == 'b' && s[s.size()-2] == 'b')) {
                s += 'b';
                b--;
            }
            else if (c > 0 &&
                !(s.size() >= 2 && s[s.size()-1] == 'c' && s[s.size()-2] == 'c')) {
                s += 'c';
                c--;
            }
            else if (a > 0 &&
                !(s.size() >= 2 && s[s.size()-1] == 'a' && s[s.size()-2] == 'a')) {
                s += 'a';
                a--;
            }
            else if (b > 0 &&
                !(s.size() >= 2 && s[s.size()-1] == 'b' && s[s.size()-2] == 'b')) {
                s += 'b';
                b--;
            }
            else {
                break;
            }
        }

        return s;
    }
};
