class Solution {
public:
    string nearestPalindromic(string n) {
        long originaln = stol(n);
        long length = n.size();

        if (length == 1) return to_string(originaln - 1);

        vector<long> candidates;

        candidates.push_back(pow(10, length - 1) - 1);
        candidates.push_back(pow(10, length) + 1);

        long halflen = (length + 1) / 2;
        long prefix = stol(n.substr(0, halflen));

        vector<long> prefixes = {prefix - 1, prefix, prefix + 1};

        for (auto p : prefixes) {
            string left = to_string(p);
            string right = left;
            if (length % 2) right.pop_back();
            reverse(right.begin(), right.end());
            candidates.push_back(stol(left + right));
        }

        long minDiff = LONG_MAX, closestPalindrome = 0;
        for (auto candidate : candidates) {
            long diff = abs(candidate - originaln);
            if (candidate != originaln && diff < minDiff) {
                closestPalindrome = candidate;
                minDiff = diff;
            } else if (diff == minDiff) {
                closestPalindrome = min(closestPalindrome, candidate);
            }
        }

        return to_string(closestPalindrome);
    }
};
