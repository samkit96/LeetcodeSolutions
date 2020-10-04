// Problem: https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        
        map<int, vector<int>> mpp;
        
        int n = groupSizes.size();
        for(int i=0 ; i<n ; i++) {
            mpp[groupSizes[i]].push_back(i);
        }
        
        for(auto it: mpp) {
            int sz = it.first;
            vector<int> members = it.second;
            
            for (int i=0 ; i<members.size() ; i += sz) {
                
                vector<int> group;
                for (int j=i ; j<i+sz ; j++) {
                    group.push_back(members[j]);
                }
                
                ans.push_back(group);
            }
        }
        
        return ans;
    }
};
