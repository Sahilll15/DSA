class Solution {
public:
    bool isPalindrome(string s){
        int left=0; int right=s.size()-1;

        while(left<=right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
    vector<vector<string>> ans;
    void solve(int index,vector<string>&current,string s){
        if(index==s.size()){
            ans.push_back(current);
            return;
        }

        for(int i=index;i<s.size();i++){
            string temp=s.substr(index,i-index+1);
            bool isPal=isPalindrome(temp);
            
            if(isPal){
                current.push_back(temp);
                solve(i+1,current,s);
                current.pop_back();
            }
          
        }
        
    }
    vector<vector<string>> partition(string s) {
        vector<string>current;
        solve(0,current,s);
        return ans;
    }
};