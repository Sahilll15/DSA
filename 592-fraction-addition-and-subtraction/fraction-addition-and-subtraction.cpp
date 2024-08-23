class Solution {
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
    
    int lcm(int a, int b) {
        return (a / gcd(a, b)) * b;
    }
    
    void reduce(int &a, int &b) {
        int gcd_ab = gcd(abs(a), b);
        a /= gcd_ab;
        b /= gcd_ab;
    }
    int parseNumber(const string &expression, int &i) {
        int sign = 1;
        if (expression[i] == '-') {
            sign = -1;
            i++;
        } 
        else if (expression[i] == '+')
            i++;
        int num = 0;
        while (i < expression.length() && isdigit(expression[i])) {
            num = num * 10 + (expression[i] - '0');
            i++;
        }
        return sign * num;
    }
    
public:
    string fractionAddition(string expression) {
        int numerator = 0, denominator = 1;
        for (int i = 0; i < expression.length();) {
            int num = parseNumber(expression, i);
            i++; 
            int den = parseNumber(expression, i);
            int LCM = lcm(denominator, den);
            numerator = numerator * (LCM / denominator) + num * (LCM / den);
            denominator = LCM;
        }
        if (numerator == 0) return "0/1";
        reduce(numerator, denominator);
        return to_string(numerator) + "/" + to_string(denominator);
    }
};