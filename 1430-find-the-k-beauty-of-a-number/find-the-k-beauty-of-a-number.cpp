class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string numberStr = to_string(num);
        int ans = 0;

        string number = "";
        for (int i = 0; i < k; i++) {
            number += numberStr[i];
        }
        int current = stoi(number);

        if (current != 0 && num % current == 0) {
            ans++;
        }

        for (int i = k; i < numberStr.size(); i++) {
            current = (current % (int)pow(10, k - 1)) * 10 + (numberStr[i] - '0');

            if (current != 0 && num % current == 0) {
                ans++;
            }
        }

        return ans;  
    }
};
