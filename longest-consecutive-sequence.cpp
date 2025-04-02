class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++) {
            mp[nums[i]] = 1;
        }
        int longest = INT_MIN;
        for(auto &it: mp) {
            int count = 1;
            if(mp.find(it.first-1) == mp.end()) {
                int j= it.first+1;
                while(mp.find(j) != mp.end()) {
                    count++;
                    j++;
                }
            }
            longest = max(longest,count);
        }
        return longest;
        
    }
};