class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;

        for(int i=0;i<asteroids.size();i++){
           if(st.empty()){
            st.push(asteroids[i]);
            continue;
           }

            bool destroyed=false;
            int asteroid=asteroids[i];

           while (!st.empty() && st.top() > 0 && asteroid < 0) {
                if(st.top()<abs(asteroid)){
                    st.pop();
                }else if(st.top()==abs(asteroid)){
                    st.pop();
                    destroyed=true;
                    break;
                }else{
                    destroyed=true;
                    break;
                }
            }

            if(!destroyed){
                st.push(asteroids[i]);
            }

        }

        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};