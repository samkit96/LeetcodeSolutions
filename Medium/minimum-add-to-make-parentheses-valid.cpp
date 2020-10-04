// Problem: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

class Solution {
public:
    int minAddToMakeValid(string S) {
        int n = S.size(), ans = 0;
        stack<int>st;
        for(int i=0 ; i<n ; i++) {
            if (S[i] == '(') {
                st.push(1);
            } else {
                if (st.empty()) {
                    ans++;
                } else {
                    st.pop();
                }
            }
        }
        ans += st.size();
        return ans;
    }
};
