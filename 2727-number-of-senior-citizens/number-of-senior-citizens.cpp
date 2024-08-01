class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;

        for (const string& detail : details) {
            
            string ageStr = detail.substr(11, 2);

            int age = std::stoi(ageStr);

            if (age > 60) {
                count++;
            }
        }

        return count;
    }
};