class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> inDegree(n + 1, 0);
        vector<int> outDegree(n + 1, 0);

        for(auto edge:trust){
            int person=edge[0];
            int trusted=edge[1];

            inDegree[trusted]++;
            outDegree[person]++;
        }

        for(int i=1;i<=n;i++){
            if(inDegree[i]==n-1 && outDegree[i]==0){
                return i;
            }
        }
    return -1;
    }
};



