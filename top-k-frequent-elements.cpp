class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++) {
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>> q;
        for(auto &it : mp) {
            q.push({it.second, it.first});
        }
        while(k--) {
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};