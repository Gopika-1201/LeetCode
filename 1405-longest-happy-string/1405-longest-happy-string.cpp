class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int, char>> pq;

        if (a > 0) pq.push({a, 'a'});
        if (b > 0) pq.push({b, 'b'});
        if (c > 0) pq.push({c, 'c'});

        string ans = "";

        while (!pq.empty()) {
            auto [count, ch] = pq.top();
            pq.pop();
            int n = ans.size();
            if (n >= 2 && ans[n - 1] == ch && ans[n - 2] == ch) {
                if (pq.empty()) break;

                auto [count2, ch2] = pq.top();
                pq.pop();

                ans += ch2;
                count2--;

                if (count2 > 0)
                    pq.push({count2, ch2});

                pq.push({count, ch});
            } 
            else {
                ans += ch;
                count--;

                if (count > 0)
                    pq.push({count, ch});
            }
        }
        return ans;
    }
};
