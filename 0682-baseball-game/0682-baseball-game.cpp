class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> arr;

        for (string op : operations) {
            if (op == "C") {
                arr.pop_back();
            }
            else if (op == "D") {
                arr.push_back(arr.back() * 2);
            }
            else if (op == "+") {
                arr.push_back(arr[arr.size()-1] + arr[arr.size()-2]);
            }
            else {
                arr.push_back(stoi(op));
            }
        }

        int sum = 0;
        for (int x : arr)
            sum += x;

        return sum;
    }
};