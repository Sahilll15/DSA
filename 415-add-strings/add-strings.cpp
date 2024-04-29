class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans = "";
        int carry = 0;
        int i = num1.size() - 1;
        int j = num2.size() - 1;

        while(i >= 0 && j >= 0){
            int sum = (num1[i] - '0') + (num2[j] - '0') + carry;
            int digit = sum % 10;
            carry = sum / 10;
            ans += to_string(digit);
            i--;
            j--;
        }

        while(i >= 0){
            int sum = (num1[i] - '0') + carry;
            int digit = sum % 10;
            carry = sum / 10;
            ans += to_string(digit);
            i--;
        }

        while(j >= 0){
            int sum = (num2[j] - '0') + carry;
            int digit = sum % 10;
            carry = sum / 10;
            ans += to_string(digit);
            j--;
        }

        if(carry != 0){
            ans += to_string(carry);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};