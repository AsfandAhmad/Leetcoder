class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;
        vector<string> keys;

        for (string s : strs) {

            string temp = s;
            sort(temp.begin(), temp.end());

            bool found = false;

            for (int i = 0; i < keys.size(); i++) {
                if (keys[i] == temp) {
                    ans[i].push_back(s);
                    found = true;
                    break;
                }
            }

            if (!found) {
                keys.push_back(temp);
                ans.push_back({s});
            }
        }

        return ans;
    }
};