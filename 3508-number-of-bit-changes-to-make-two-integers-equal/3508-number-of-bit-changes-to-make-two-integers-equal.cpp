class Solution {
public:
    int minChanges(int n, int k) {
        if (n == k) return 0;
        bitset<32> a = n, b = k;
        for (int i = 0; i < 32; ++i) if (b[i] && !a[i]) return -1;
        int x = 0;
        for (int i = 0; i < 32; ++i) if (a[i] && !b[i]) x++;
        return x;
    }
};