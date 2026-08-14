class Solution {
public:
    int longestSubstring(string s, int k) {
        int ans = 0;

        for (int target = 1; target <= 26; target++) {

            map<char, int> mp;

            int left = 0;
            int unique = 0;
            int valid = 0;

            for (int right = 0; right < s.size(); right++) {

                mp[s[right]]++;

                if (mp[s[right]] == 1)
                    unique++;

                if (mp[s[right]] == k)
                    valid++;

                while (unique > target) {

                    if (mp[s[left]] == k)
                        valid--;

                    mp[s[left]]--;

                    if (mp[s[left]] == 0)
                        unique--;

                    left++;
                }

                if (unique == target && valid == target) {
                    ans = max(ans, right - left + 1);
                }
            }
        }

        return ans;
    }
};