class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count = 0;

        for (int i = 0; i < words.size(); i++) {
            string a = words[i];
            sort(a.begin(), a.end()); // Sort string a

            for (int j = i + 1; j < words.size(); j++) {
                string b = words[j];
                sort(b.begin(), b.end()); // Sort string b

                if (a == b) {
                    count++;
                }
            }
        }

        return count;
    }
};
