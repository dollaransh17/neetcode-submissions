class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> mp;
        string res = "";

        // Count frequency of each character in s
        for (char ch : s) {
            mp[ch]++;
        }

        // Add characters in the order specified by 'order'
        for (char ch : order) {
            while (mp[ch] > 0) {
                res += ch;
                mp[ch]--;
            }
        }

        // Add remaining characters that were not in 'order'
        for (auto it : mp) {
            while (it.second > 0) {
                res += it.first;
                it.second--;
            }
        }

        return res;
    }
};