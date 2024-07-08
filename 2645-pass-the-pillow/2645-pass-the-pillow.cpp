class Solution {
public:
    int passThePillow(int n, int time) {
        vector<int> values;
        
        for(int i = 0; i < n; i++) {
            values.push_back(i);
        }

        int current = 0;
        bool forward = true;

        while(time > 0) {
            if(forward) {
                if(current == n - 1) {
                    forward = false;
                    current--;
                } else {
                    current++;
                }
            } else {
                if(current == 0) {
                    forward = true;
                    current++;
                } else {
                    current--;
                }
            }
            time--;
        }

        return current + 1; 
    }
};
