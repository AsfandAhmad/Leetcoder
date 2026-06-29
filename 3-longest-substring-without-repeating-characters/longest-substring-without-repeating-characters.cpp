class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> seen;
        int l = 0;
        int best = 0;

        for (int r = 0; r < s.length(); r++) {
            if (seen.count(s[r]) && seen[s[r]] >= l) {
                l = seen[s[r]] + 1;
            }

            seen[s[r]] = r;
            best = max(best, r - l + 1);
        }

        return best;
    }
};