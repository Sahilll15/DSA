class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {

    int n=items.size();
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (ruleKey == "type")
        {
            if (ruleValue == items[i][0])
            {
                count++;
            }
        }
        else if (ruleKey == "color")
        {
            if (ruleValue == items[i][1])
            {
                count++;
            }
        }
        else if (ruleKey == "name")
        {
            if (ruleValue == items[i][2])
            {
                count++;
            }
        }
    }
    return count;


    }
};