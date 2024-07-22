class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        priority_queue<pair<int,string>> pq;

        for(int i=0;i<names.size();i++){
            pq.push({
                heights[i],
                names[i]
            });
        }

        vector<string> ans;

        while(!pq.empty()){
            pair<int,string> top=pq.top();
            pq.pop();
            ans.push_back(top.second);
        }

        return ans;
    }
};