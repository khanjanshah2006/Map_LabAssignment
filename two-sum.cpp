class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int,int> mp;
        mp[nums[0]] = 0;
        for(int i = 1; i < n; i++) {
            int find = target - nums[i];
            auto it = mp.find(find);
            if(it != mp.end()) {
                ans.push_back(i);
                ans.push_back(it->second);
                break;
            } else {
                mp[nums[i]] = i;
            }
        }
        return ans;
    }
};
