class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        
        if (n % groupSize != 0) {
            return false;
        }

        priority_queue<int, vector<int>, greater<int>> pq;
        unordered_map<int, int> mp;

        for (auto it : hand) {
            pq.push(it);
            mp[it]++;
        }

        while (!pq.empty()) {
            int topElement = pq.top();
            pq.pop();

            if (mp.find(topElement) == mp.end()) {
                continue;
            }

           
            for (int i = 0; i < groupSize; i++) {
                if (mp.find(topElement + i) == mp.end()) {
                    return false;
                }
                mp[topElement + i]--;
                if (mp[topElement + i] == 0) {
                    mp.erase(topElement + i);
                }
            }
        }
        return true;
    }
};