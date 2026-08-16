class Solution {
public:
    void reverseString(vector<char>& s) {
        solve(s,0,s.size()-1);
    }

    void solve(vector<char>& s ,int left,int right){
        if(left>=right){
            return;
        }

        swap(s[left],s[right]);
        solve(s,left+1,right-1);
    }
};