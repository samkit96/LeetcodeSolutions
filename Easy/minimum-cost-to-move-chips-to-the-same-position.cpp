// Problem: https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/


class Solution {
public:
    int minCostToMoveChips(vector<int>& v) {
        
        int odd = 0, even = 0;
        
        for(int i=0 ; i<v.size() ; i++) {
            
            if(v[i]&1) {
                odd++;
            } else {
                even++;
            }
        }
        
        if (odd == 0 || even == 0) return 0;
        if (odd > even) return even;
        else return odd;
    }
};
