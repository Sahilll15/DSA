class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<long> ob;
        for (auto& i : obstacles) ob.insert(static_cast<long>(i[0]) * 60001 + i[1]);

        int arr[5] = {0, 1, 0, -1, 0}, x = 0, y = 0, d = 0, maxD = 0;

        for (int i : commands){
            if (i == -1) d = (d + 1) % 4;
            else if (i == -2) d = (d + 3) % 4;
            else {
                for (int j=0;j<i;j++){
                    int X = x + arr[d], Y = y + arr[d+1];
                    if (ob.find(static_cast<long>(X) * 60001 + Y) == ob.end()){
                        x = X, y = Y, maxD = max(maxD, x*x + y*y);
                    }
                    else break;
                }
            }
        }
        return maxD;
    }
};

const static int fast = []{
    ios::sync_with_stdio(0);
    cin.tie(0);
    return 0;
}();