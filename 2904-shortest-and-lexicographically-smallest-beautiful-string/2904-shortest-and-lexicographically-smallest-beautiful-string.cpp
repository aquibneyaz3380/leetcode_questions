class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int l = 0, cnt1 = 0;
        int minLen = INT_MAX;
        string ans = "";

        for (int r = 0; r < n; r++) {
            if (s[r] == '1')
                cnt1++;

            // More than k ones
            while (cnt1 > k) {
                if (s[l] == '1')
                    cnt1--;
                l++;
            }

            // Remove unnecessary leading zeros
            while (cnt1 == k && s[l] == '0') {
                l++;
            }

            // Exactly k ones
            if (cnt1 == k) {
                int len = r - l + 1;

                if (len < minLen) {
                    minLen = len;
                    ans = s.substr(l, len);
                }
                else if (len == minLen) {
                    string curr = s.substr(l, len);
                    if (curr < ans)
                        ans = curr;
                }
            }
        }

        return ans;
    }
};